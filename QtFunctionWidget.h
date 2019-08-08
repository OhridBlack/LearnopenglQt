#ifndef QTFUNCTIONWIDGET_H
#define QTFUNCTIONWIDGET_H

#include <QOpenGLWidget>


#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QOpenGLTexture>

class QtFunctionWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    QtFunctionWidget(QWidget *parent = nullptr);
    ~QtFunctionWidget() Q_DECL_OVERRIDE;

protected:
    virtual void initializeGL() Q_DECL_OVERRIDE;
    virtual void resizeGL(int w, int h) Q_DECL_OVERRIDE;
    virtual void paintGL() Q_DECL_OVERRIDE;

private:
    QOpenGLShaderProgram shaderProgram;
    QOpenGLBuffer vbo, ebo;
    QOpenGLVertexArrayObject vao;
    QOpenGLTexture *texture1 = nullptr;
    QOpenGLTexture *texture2 = nullptr;

    QTimer* m_pTimer = nullptr;
    int     m_nTimeValue = 0;
};

#endif // QTFUNCTIONWIDGET_H

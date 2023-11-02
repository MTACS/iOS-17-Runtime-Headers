
@interface SUScriptCanvasResult : NSObject {
    UIImage * _image;
    struct CGPath { } * _path;
}

@property (nonatomic, readonly) UIImage *canvasImage;
@property (nonatomic, readonly) struct CGPath { }*canvasPath;

- (id)_initWithCanvas:(id)arg1;
- (id)canvasImage;
- (struct CGPath { }*)canvasPath;
- (void)dealloc;

@end

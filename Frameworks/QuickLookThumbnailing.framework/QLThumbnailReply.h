
@interface QLThumbnailReply : NSObject {
    struct CGColorSpace { } * _colorSpace;
    struct CGSize { 
        double width; 
        double height; 
    }  _contextSize;
    id /* block */  _drawInContextBlock;
    id /* block */  _drawingBlock;
    NSString * _extensionBadge;
    int  _iconFlavor;
    NSURL * _imageURL;
    id /* block */  _ioSurfaceAsyncBlock;
    id /* block */  _ioSurfaceBlock;
    bool  _isLowQuality;
    unsigned long long  _type;
}

@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (nonatomic) struct CGSize { double x1; double x2; } contextSize;
@property (nonatomic, copy) id /* block */ drawInContextBlock;
@property (nonatomic, copy) id /* block */ drawingBlock;
@property (nonatomic, copy) NSString *extensionBadge;
@property (nonatomic) int iconFlavor;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, copy) id /* block */ ioSurfaceAsyncBlock;
@property (nonatomic, copy) id /* block */ ioSurfaceBlock;
@property (nonatomic) bool isLowQuality;
@property (nonatomic) unsigned long long type;

+ (id)replyWithContextSize:(struct CGSize { double x1; double x2; })arg1 currentContextDrawingBlock:(id /* block */)arg2;
+ (id)replyWithContextSize:(struct CGSize { double x1; double x2; })arg1 drawingBlock:(id /* block */)arg2;
+ (id)replyWithContextSize:(struct CGSize { double x1; double x2; })arg1 ioSurfaceAsyncBlock:(id /* block */)arg2;
+ (id)replyWithContextSize:(struct CGSize { double x1; double x2; })arg1 ioSurfaceBlock:(id /* block */)arg2;
+ (id)replyWithImageFileURL:(id)arg1;

- (void).cxx_destruct;
- (struct CGColorSpace { }*)colorSpace;
- (struct CGSize { double x1; double x2; })contextSize;
- (id /* block */)drawInContextBlock;
- (id /* block */)drawingBlock;
- (id)extensionBadge;
- (int)iconFlavor;
- (id)imageURL;
- (id)init;
- (id /* block */)ioSurfaceAsyncBlock;
- (id /* block */)ioSurfaceBlock;
- (bool)isLowQuality;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setContextSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDrawInContextBlock:(id /* block */)arg1;
- (void)setDrawingBlock:(id /* block */)arg1;
- (void)setExtensionBadge:(id)arg1;
- (void)setIconFlavor:(int)arg1;
- (void)setImageURL:(id)arg1;
- (void)setIoSurfaceAsyncBlock:(id /* block */)arg1;
- (void)setIoSurfaceBlock:(id /* block */)arg1;
- (void)setIsLowQuality:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end

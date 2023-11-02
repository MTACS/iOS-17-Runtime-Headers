
@interface BCUPurgeableImage : NSObject <BCUPurgeableImage> {
    double  _contentsScale;
    struct CGImage { } * _image;
    struct __IOSurface { } * _surface;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) double contentsScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id layerContents;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (struct CGImage { }*)CGImage;
- (double)contentsScale;
- (void)dealloc;
- (id)initWithImage:(struct CGImage { }*)arg1 surface:(struct __IOSurface { }*)arg2 contentsScale:(double)arg3;
- (id)layerContents;
- (bool)markAsNonVolatile;
- (bool)markAsVolatile;
- (struct CGSize { double x1; double x2; })size;

@end

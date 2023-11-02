
@interface _PreloadedImageResult : NSObject <PUImageRequesterResult> {
    UIImage * _image;
}

@property (nonatomic, readonly) <PUDisplayAsset> *asset;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGImage { }*gainMapImage;
@property (nonatomic, readonly) float gainMapValue;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) bool imageIsFullQuality;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, readonly) double timeIntervalSinceRequest;

- (void).cxx_destruct;
- (id)asset;
- (id)description;
- (struct CGImage { }*)gainMapImage;
- (float)gainMapValue;
- (id)image;
- (bool)imageIsFullQuality;
- (id)initWithPreloadedImage:(id)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (double)timeIntervalSinceRequest;

@end


@interface _PUImageRequesterResult : NSObject <PUImageRequesterResult> {
    <PUDisplayAsset> * _asset;
    struct CGImage { } * _gainMapImage;
    float  _gainMapValue;
    UIImage * _image;
    bool  _imageIsFullQuality;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    double  _timeIntervalSinceRequest;
}

@property (nonatomic, retain) <PUDisplayAsset> *asset;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic) struct CGImage { }*gainMapImage;
@property (nonatomic) float gainMapValue;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool imageIsFullQuality;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic) double timeIntervalSinceRequest;

- (void).cxx_destruct;
- (id)asset;
- (void)dealloc;
- (id)description;
- (struct CGImage { }*)gainMapImage;
- (float)gainMapValue;
- (id)image;
- (bool)imageIsFullQuality;
- (void)setAsset:(id)arg1;
- (void)setGainMapImage:(struct CGImage { }*)arg1;
- (void)setGainMapValue:(float)arg1;
- (void)setImage:(id)arg1;
- (void)setImageIsFullQuality:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTimeIntervalSinceRequest:(double)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (double)timeIntervalSinceRequest;

@end

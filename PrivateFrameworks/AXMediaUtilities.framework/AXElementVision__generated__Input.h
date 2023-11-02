
@interface AXElementVision__generated__Input : NSObject <MLFeatureProvider> {
    double  _confidenceThreshold;
    struct __CVBuffer { } * _image;
    double  _iouThreshold;
}

@property (nonatomic) double confidenceThreshold;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) struct __CVBuffer { }*image;
@property (nonatomic) double iouThreshold;

- (double)confidenceThreshold;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (struct __CVBuffer { }*)image;
- (id)initWithImage:(struct __CVBuffer { }*)arg1 iouThreshold:(double)arg2 confidenceThreshold:(double)arg3;
- (double)iouThreshold;
- (void)setConfidenceThreshold:(double)arg1;
- (void)setImage:(struct __CVBuffer { }*)arg1;
- (void)setIouThreshold:(double)arg1;

@end

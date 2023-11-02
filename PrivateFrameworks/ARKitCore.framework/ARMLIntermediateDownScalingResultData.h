
@interface ARMLIntermediateDownScalingResultData : NSObject <ARResultData> {
    ARImageData * _originalImageData;
    struct __CVBuffer { } * _pixelBuffer;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARImageData *originalImageData;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 originalImageData:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)originalImageData;
- (struct __CVBuffer { }*)pixelBuffer;
- (double)timestamp;

@end

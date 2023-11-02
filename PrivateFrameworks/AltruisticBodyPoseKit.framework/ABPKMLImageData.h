
@interface ABPKMLImageData : NSObject {
    long long  _abpkDeviceOrientation;
    struct __CVBuffer { } * _pixelBuffer;
    ABPKImagePreProcessingParams * _preprocessingParams;
    double  _timestamp;
}

@property (nonatomic) long long abpkDeviceOrientation;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, retain) ABPKImagePreProcessingParams *preprocessingParams;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (long long)abpkDeviceOrientation;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 abpkDeviceOrientation:(long long)arg3 preprocessingParameters:(id)arg4;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)preprocessingParams;
- (void)setAbpkDeviceOrientation:(long long)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setPreprocessingParams:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end

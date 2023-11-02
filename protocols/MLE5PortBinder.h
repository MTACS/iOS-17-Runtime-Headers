
@protocol MLE5PortBinder <NSObject>

@required

- (MLFeatureValue *)featureValue;
- (MLPixelBufferPool *)pixelBufferPool;
- (void)reset;
- (void)setPixelBufferPool:(MLPixelBufferPool *)arg1;

@end

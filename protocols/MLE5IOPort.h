
@protocol MLE5IOPort <NSObject>

@required

- (NSString *)name;
- (MLPixelBufferPool *)pixelBufferPool;
- (void)reset;
- (void)setPixelBufferPool:(MLPixelBufferPool *)arg1;

@end

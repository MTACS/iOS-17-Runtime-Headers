
@interface ARMattingImageMetaData : NSObject <ARResultData> {
    struct __CVBuffer { } * _downSampledImageBuffer;
    struct __CVBuffer { } * _mattingScaleImageBuffer;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct __CVBuffer { }*downSampledImageBuffer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CVBuffer { }*mattingScaleImageBuffer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

- (void)dealloc;
- (id)description;
- (struct __CVBuffer { }*)downSampledImageBuffer;
- (id)initWithTimestamp:(double)arg1 downSampledImageBuffer:(struct __CVBuffer { }*)arg2 mattingScaleImageBuffer:(struct __CVBuffer { }*)arg3;
- (struct __CVBuffer { }*)mattingScaleImageBuffer;
- (double)timestamp;

@end


@interface ARAudioData : NSObject <ARSensorData> {
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*sampleBuffer;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end

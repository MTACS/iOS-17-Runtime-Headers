
@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>

+ (id)writerInstance;

- (bool)isReady;
- (void)publishSessionStats:(id)arg1 withSessionStartTime:(bool)arg2;
- (void)write:(id)arg1;
- (void)write:(id)arg1 withTimeStamp:(id)arg2;

@end

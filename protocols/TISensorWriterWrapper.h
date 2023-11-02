
@protocol TISensorWriterWrapper

@required

- (bool)isReady;
- (void)write:(NSData *)arg1;
- (void)write:(NSData *)arg1 withTimeStamp:(NSDate *)arg2;

@optional

- (void)publishSessionStats:(TISKSessionStats *)arg1 withSessionStartTime:(bool)arg2;

@end

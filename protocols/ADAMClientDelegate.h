
@protocol ADAMClientDelegate <NSObject>

@required

- (void)receiveAudioSample:(ADAMAudioDataAnalysisSample *)arg1;
- (void)receiveAudioSample:(NSNumber *)arg1 type:(unsigned int)arg2 metadata:(NSDictionary *)arg3;

@end


@protocol HMDAVCAudioStream <NSObject>

@required

- (NSDictionary *)capabilities;
- (bool)configure:(AVCMediaStreamConfig *)arg1 error:(id*)arg2;
- (<AVCAudioStreamDelegate> *)delegate;
- (long long)direction;
- (bool)isRTCPEnabled;
- (bool)isRTCPTimeOutEnabled;
- (bool)isRTPTimeOutEnabled;
- (void)pause;
- (void)resume;
- (double)rtcpSendIntervalSec;
- (double)rtcpTimeOutIntervalSec;
- (double)rtpTimeOutIntervalSec;
- (void)setDelegate:(id <AVCAudioStreamDelegate>)arg1;
- (void)setDirection:(long long)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendIntervalSec:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutIntervalSec:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutIntervalSec:(double)arg1;
- (void)setVolume:(float)arg1;
- (void)start;
- (void)startSynchronizeWithStream:(long long)arg1;
- (void)stop;
- (float)volume;

@end

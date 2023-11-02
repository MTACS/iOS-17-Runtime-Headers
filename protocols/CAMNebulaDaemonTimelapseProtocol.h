
@protocol CAMNebulaDaemonTimelapseProtocol <CAMNebulaDaemonTimelapseProtocolLimited>

@required

- (void)finishCaptureForTimelapseWithUUID:(NSString *)arg1;
- (void)resumeTimelapseWithUUID:(NSString *)arg1;
- (void)startTimelapseWithUUID:(NSString *)arg1;
- (void)stopTimelapseWithUUID:(NSString *)arg1;
- (void)updateTimelapseWithUUID:(NSString *)arg1;

@end

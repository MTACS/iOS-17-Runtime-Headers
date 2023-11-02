
@protocol CAMNebulaDaemonProtocol <CAMNebulaDaemonTimelapseProtocol, CAMNebulaDaemonIrisProtocol>

@required

- (void)pingAfterInterruption;

@end

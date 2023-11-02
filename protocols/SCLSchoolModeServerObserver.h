
@protocol SCLSchoolModeServerObserver <NSObject>

@required

- (void)server:(SCLSchoolModeServer *)arg1 didUpdateState:(SCLState *)arg2 fromState:(SCLState *)arg3;

@end

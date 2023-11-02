
@protocol SCLSchoolModeXPCClientDelegate <NSObject>

@required

- (void)client:(SCLSchoolModeXPCClient *)arg1 didLoadScheduleSettings:(SCLScheduleSettings *)arg2;
- (void)client:(SCLSchoolModeXPCClient *)arg1 didUpdateScheduleSettings:(SCLScheduleSettings *)arg2;
- (void)client:(SCLSchoolModeXPCClient *)arg1 didUpdateToState:(SCLState *)arg2 fromState:(SCLState *)arg3;
- (void)clientDidChangeUnlockHistory:(SCLSchoolModeXPCClient *)arg1;

@end

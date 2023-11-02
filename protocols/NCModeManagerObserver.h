
@protocol NCModeManagerObserver <NSObject>

@required

- (void)modeManager:(NCModeManager *)arg1 didUpdateCurrentModeConfiguration:(DNDModeConfiguration *)arg2 previousModeConfiguration:(DNDModeConfiguration *)arg3;

@end

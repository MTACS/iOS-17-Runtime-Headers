
@protocol EKDaemonConnectionDelegate <NSObject>

@required

- (void)daemonRestarted;
- (void)databaseRestoreGenerationChangedExternally:(int)arg1;

@end

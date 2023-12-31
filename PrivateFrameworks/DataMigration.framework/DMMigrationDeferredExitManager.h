
@interface DMMigrationDeferredExitManager : NSObject

+ (id)_serialQueue;

- (id)_deferralDuration;
- (void)_exitClean;
- (bool)_isDeferringExit;
- (void)_resetGlobalState;
- (void)cancelDeferredExitWithConnection:(id)arg1;
- (void)deferExitWithConnection:(id)arg1;
- (void)migrationDidEnd;
- (void)migrationDidStart;

@end

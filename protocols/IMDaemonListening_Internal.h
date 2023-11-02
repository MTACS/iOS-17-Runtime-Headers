
@protocol IMDaemonListening_Internal <NSObject>

@required

- (NSMutableDictionary *)_contexts;
- (bool)_hidingDisconnect;
- (void)_resetPostedSetupCompleted;
- (void)_setHidingDisconnect:(bool)arg1;
- (void)_setStamp:(NSString *)arg1 forContext:(NSString *)arg2;
- (NSString *)_stampForContext:(NSString *)arg1;
- (NSArray *)allServices;
- (bool)hasPostedSetupComplete;
- (bool)isSetupComplete;
- (IMServiceImpl *)serviceWithName:(NSString *)arg1;

@end

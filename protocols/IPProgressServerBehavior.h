
@protocol IPProgressServerBehavior <NSObject>

@required

- (<IPProgressServerBehaviorDelegate> *)delegate;
- (void)identityWasUninstalled:(LSApplicationIdentity *)arg1;
- (void)progressForIdentity:(LSApplicationIdentity *)arg1 changed:(IPInstallableProgressData *)arg2;
- (void)progressForIdentity:(LSApplicationIdentity *)arg1 finishedWithState:(unsigned long long)arg2;
- (void)progressForIdentityInitiated:(LSApplicationIdentity *)arg1;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)resume;
- (void)setDelegate:(id <IPProgressServerBehaviorDelegate>)arg1;

@end

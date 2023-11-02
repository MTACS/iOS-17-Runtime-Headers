
@protocol SFCompanionXPCManagerObserver <NSObject>

@required

- (void)xpcManagerConnectionInterrupted;

@optional

- (void)xpcManagerDidInvalidate:(SFCompanionXPCManager *)arg1;
- (void)xpcManagerDidResumeConnection:(SFCompanionXPCManager *)arg1;

@end

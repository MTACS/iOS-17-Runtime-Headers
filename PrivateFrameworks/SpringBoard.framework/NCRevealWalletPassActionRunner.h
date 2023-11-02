
@interface NCRevealWalletPassActionRunner : NSObject <NCNotificationActionRunner, SBLockScreenPluginLifecycleObserver> {
    SBSCardItem * _cardItem;
    id /* block */  _pluginCompletionBlock;
    bool  _shouldForwardAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldForwardAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didDismissLockScreenPlugin:(id)arg1;
- (void)didPresentLockScreenPlugin:(id)arg1;
- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)setShouldForwardAction:(bool)arg1;
- (bool)shouldForwardAction;
- (void)willDismissLockScreenPlugin:(id)arg1;
- (void)willPresentLockScreenPlugin:(id)arg1;

@end

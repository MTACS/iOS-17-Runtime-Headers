
@interface PKTransactionAuthenticationPasscodeViewController : UIViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> {
    NSData * _archivedAnalyticsSessionToken;
    <PKTransactionAuthenticationPasscodeViewControllerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    NSString * _passUniqueIdentifier;
    PKRemoteTransactionAuthenticationPasscodeViewController * _remoteVC;
    _UIAsyncInvocation * _remoteVCRequest;
    NSString * _transactionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKTransactionAuthenticationPasscodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *passUniqueIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transactionIdentifier;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_setRemoteVC:(id)arg1 completion:(id /* block */)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithPassUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 archivedAnalyticsSessionToken:(id)arg3;
- (void)loadView;
- (id)passUniqueIdentifier;
- (void)passcodeViewControllerDidCancel;
- (void)passcodeViewControllerDidEndSessionExchange;
- (void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)arg1;
- (void)passcodeViewControllerRequestSessionExchangeTokenWithHandler:(id /* block */)arg1;
- (void)resetWithTransactionAuthenticationFailure:(long long)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)transactionIdentifier;
- (void)viewWillLayoutSubviews;

@end

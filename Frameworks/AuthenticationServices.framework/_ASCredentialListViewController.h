
@interface _ASCredentialListViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate> {
    _ASIncomingCallObserver * _callObserver;
    <_ASCredentialListViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_ASCredentialListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestDidFailWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)initWithExtension:(id)arg1 serviceIdentifiers:(id)arg2 requestParameters:(id)arg3;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 passkeyAssertionCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end

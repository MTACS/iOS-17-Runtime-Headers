
@interface _ASCredentialProviderExtensionConfigurationViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate> {
    <_ASCredentialProviderExtensionConfigurationViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_ASCredentialProviderExtensionConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 completion:(id /* block */)arg2;
- (void)_requestDidFailWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)beginConfiguringExtension;
- (id)delegate;
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end


@interface PKSharingMessageExtensionPushProvisioningPresenter : NSObject <PKSharingMessageExtensionPresenter> {
    PKShareableCredentialMessage * _message;
    <PKPassLibraryDataProvider> * _passLibrary;
    <PKSharingMessageExtensionRenderer> * _renderer;
    <PKPaymentWebServiceTargetDeviceProtocol> * _targetDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PKSharingMessageExtensionMessage> *message;
@property (nonatomic) <PKSharingMessageExtensionRenderer> *renderer;
@property (readonly) Class superclass;

+ (Class)messageClass;
+ (id)propertiesForMessage:(id)arg1;

- (void).cxx_destruct;
- (void)didTapMessage;
- (void)extensionWillAppear;
- (id)initWithTargetDevice:(id)arg1 passLibrary:(id)arg2;
- (id)message;
- (id)renderer;
- (void)setMessage:(id)arg1;
- (void)setRenderer:(id)arg1;
- (void)validateForRecipients:(id)arg1 senderAddress:(id)arg2 completion:(id /* block */)arg3;

@end

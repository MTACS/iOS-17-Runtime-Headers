
@interface PKSharingMessageExtensionCarKeyPresenter : NSObject <PKSharingMessageExtensionPresenter> {
    PKPaymentAuthorizationCoordinator * _authorizationCoordinator;
    id /* block */  _authorizationCoordinatorHandler;
    PKContactResolver * _contactResolver;
    bool  _keySupportsOnlyUWB;
    PKSubcredentialInvitationMessage * _message;
    <PKPassLibraryDataProvider> * _passLibrary;
    <PKSharingMessageExtensionRenderer> * _renderer;
    PKAppletSubcredentialSharingRequest * _sharingRequest;
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
- (void)setMessageFromShare:(id)arg1 pass:(id)arg2 completion:(id /* block */)arg3;
- (void)setRenderer:(id)arg1;
- (void)validateForRecipients:(id)arg1 senderAddress:(id)arg2 completion:(id /* block */)arg3;

@end

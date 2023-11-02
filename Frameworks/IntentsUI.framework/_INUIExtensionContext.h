
@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending> {
    _INUIExtensionContextState * _currentExtensionContextState;
    <_INUIRemoteViewControllerServing> * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <_INUIRemoteViewControllerServing> *viewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_bestAllowedSizeForAllowedSizesDictionary:(id)arg1;
- (id)_errorHandlingHostProxy;
- (void)_requestHandlingOfIntent:(id)arg1;
- (void)_willBeginEditing;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)desiresInteractivity:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })hostedViewMaximumAllowedSize;
- (struct CGSize { double x1; double x2; })hostedViewMinimumAllowedSize;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)interfaceParametersDescription;
- (void)queryRepresentedPropertiesWithCompletion:(id /* block */)arg1;
- (void)setExtensionContextState:(id)arg1 completion:(id /* block */)arg2;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)viewWasCancelled;

@end

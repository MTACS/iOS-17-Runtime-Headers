
@interface ILClassificationUIExtensionContext : NSExtensionContext <ILClassificationUIExtensionVendorProtocol> {
    bool  _readyForClassificationResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReadyForClassificationResponse, nonatomic) bool readyForClassificationResponse;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (oneway void)classificationResponseForRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)isReadyForClassificationResponse;
- (oneway void)prepareForClassificationRequest:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setReadyForClassificationResponse:(bool)arg1;
- (id)viewController;

@end

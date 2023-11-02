
@interface ILClassificationUIExtensionHostContext : NSExtensionContext <ILClassificationUIExtensionHostProtocol> {
    <ILClassificationUIExtensionHostContextDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ILClassificationUIExtensionHostContextDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)classificationResponseForRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)delegateQueue;
- (void)prepareForClassificationRequest:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (oneway void)setReadyForClassificationResponse:(bool)arg1;

@end


@interface INCExtensionProxy : NSObject <INCExtensionProxy> {
    NSValue * _auditTokenValue;
    INCExtensionConnection * _connection;
    NSExtension * _extension;
    id /* block */  _imageCachingHandler;
    id /* block */  _imageProcessingHandler;
    id /* block */  _responseHandler;
    bool  _shouldCache;
    <_INExtensionContextVending> * _vendorRemote;
}

@property (nonatomic, readonly) NSValue *_auditTokenValue;
@property (nonatomic, readonly) INCExtensionConnection *_connection;
@property (nonatomic, readonly) NSExtension *_extension;
@property (getter=_isExtensionBeingDebugged, nonatomic, readonly) bool _extensionBeingDebugged;
@property (nonatomic, readonly) <_INExtensionContextVending> *_vendorRemote;
@property (nonatomic, copy) id /* block */ imageCachingHandler;
@property (nonatomic, copy) id /* block */ imageProcessingHandler;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) bool shouldCache;
@property (nonatomic) bool shouldResetRequestAfterHandle;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_auditTokenValue;
- (id)_connection;
- (id)_extension;
- (bool)_extensionProcessHasEntitlement:(id)arg1;
- (id)_initWithConnection:(id)arg1 extension:(id)arg2 vendorRemote:(id)arg3 auditTokenValue:(id)arg4;
- (bool)_isExtensionBeingDebugged;
- (bool)_isIntentRestrictedWhileProtectedDataUnavailableWithCompletionHandler:(id /* block */)arg1;
- (void)_issueSandboxExtensionsForFileURLsIfNeededToIntent:(id)arg1;
- (id)_processIntent:(id)arg1 intentResponse:(id)arg2 withCacheItems:(id)arg3;
- (bool)_shouldForwardToAppWithIntent:(id)arg1 intentResponse:(id)arg2;
- (id)_vendorRemote;
- (void)confirmIntentWithCompletionHandler:(id /* block */)arg1;
- (void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getOptionsForParameterNamed:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getOptionsForParameterNamed:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleIntentWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)imageCachingHandler;
- (id /* block */)imageProcessingHandler;
- (void)prewarmAppWithIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)responseHandler;
- (void)setImageCachingHandler:(id /* block */)arg1;
- (void)setImageProcessingHandler:(id /* block */)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setShouldCache:(bool)arg1;
- (void)setShouldResetRequestAfterHandle:(bool)arg1;
- (bool)shouldCache;
- (bool)shouldResetRequestAfterHandle;
- (void)startSendingUpdatesToObserver:(id)arg1;
- (void)stopSendingUpdates;

@end

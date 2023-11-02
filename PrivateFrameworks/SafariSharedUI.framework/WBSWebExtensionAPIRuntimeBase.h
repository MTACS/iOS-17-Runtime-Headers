
@interface WBSWebExtensionAPIRuntimeBase : WBSWebExtensionAPIObject <WBSJSCallbackHandlerErrorReporter> {
    JSValue * _lastError;
    bool  _lastErrorAccessed;
    bool  _processingUserGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)reportErrorForCallbackHandler:(id)arg1 withMessage:(id)arg2 context:(struct OpaqueJSContext { }*)arg3;

@end

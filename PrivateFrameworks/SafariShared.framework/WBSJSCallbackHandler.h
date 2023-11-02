
@interface WBSJSCallbackHandler : NSObject {
    struct OpaqueJSValue { } * _callbackFunction;
    <WBSJSCallbackHandlerErrorReporter> * _errorReporter;
    struct JSRetainPtr<OpaqueJSContext *> { 
        struct OpaqueJSContext {} *m_ptr; 
    }  _globalContext;
    struct OpaqueJSValue { } * _rejectFunction;
}

@property (nonatomic, readonly) struct OpaqueJSContext { }*globalContext;
@property (nonatomic, readonly) JSValue *jsValue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)call;
- (id)callWithArgument:(id)arg1;
- (id)callWithArgument:(id)arg1 argument:(id)arg2;
- (id)callWithArgument:(id)arg1 argument:(id)arg2 argument:(id)arg3;
- (void)dealloc;
- (struct OpaqueJSContext { }*)globalContext;
- (id)initWithCallbackFunction:(struct OpaqueJSValue { }*)arg1 errorReporter:(id)arg2 context:(struct OpaqueJSContext { }*)arg3;
- (id)initWithErrorReporter:(id)arg1 context:(struct OpaqueJSContext { }*)arg2;
- (id)initWithPromiseResolveFunction:(struct OpaqueJSValue { }*)arg1 rejectFunction:(struct OpaqueJSValue { }*)arg2 context:(struct OpaqueJSContext { }*)arg3;
- (id)jsValue;
- (void)reportErrorWithMessage:(id)arg1;

@end

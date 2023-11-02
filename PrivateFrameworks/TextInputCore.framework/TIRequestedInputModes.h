
@interface TIRequestedInputModes : NSObject {
    NSURL * _databaseURL;
    bool  _didLoad;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _inputModesByDate;
}

+ (id)defaultDatabaseURL;

- (void).cxx_destruct;
- (void)_addInputMode:(id)arg1 date:(id)arg2 handler:(id /* block */)arg3;
- (id)_inputModes;
- (void)_inputModes:(id /* block */)arg1;
- (void)_loadIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_removeAllInputModes:(id /* block */)arg1;
- (void)_removeInputModesBeforeDate:(id)arg1 handler:(id /* block */)arg2;
- (void)_saveInputModes;
- (void)addInputMode:(id)arg1 date:(id)arg2 handler:(id /* block */)arg3;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)inputModes:(id /* block */)arg1;
- (void)removeAllInputModes:(id /* block */)arg1;
- (void)removeInputModesBeforeDate:(id)arg1 handler:(id /* block */)arg2;

@end

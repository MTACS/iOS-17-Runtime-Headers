
@interface DNDSAppFocusConfigurationTask : NSObject <LNActionExecutorDelegate> {
    LNAction * _action;
    NSString * _bundleIdentifier;
    id /* block */  _completion;
    LNActionExecutor * _executor;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *taskIdentifier;

- (void).cxx_destruct;
- (id)_executorCreatingIfNeeded;
- (id)_malformedIntentErrorWithMessage:(id)arg1;
- (id)bundleIdentifier;
- (void)execute;
- (void)executor:(id)arg1 didCompleteExecutionWithResult:(id)arg2 error:(id)arg3;
- (void)executor:(id)arg1 needsActionConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsDisambiguationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsValueWithRequest:(id)arg2;
- (id)initWithAction:(id)arg1 bundleIdentifier:(id)arg2;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (id)taskIdentifier;

@end

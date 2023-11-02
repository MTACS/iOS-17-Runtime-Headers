
@interface ICSchemeAction : ICAction {
    ICScheme * _scheme;
}

@property (getter=isCallbackAction, nonatomic, readonly) bool callbackAction;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) ICScheme *scheme;

- (void).cxx_destruct;
- (id)defersCompletionUntilReturn;
- (id)formatKeys;
- (id)formatString;
- (id)initWithDefinition:(id)arg1 scheme:(id)arg2;
- (bool)isCallbackAction;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(id /* block */)arg4 errorHandler:(id /* block */)arg5;
- (id)scheme;

@end

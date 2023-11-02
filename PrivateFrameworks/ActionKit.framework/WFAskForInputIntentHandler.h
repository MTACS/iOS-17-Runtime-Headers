
@interface WFAskForInputIntentHandler : NSObject <WFAskForInputIntentHandling> {
    bool  _resolvedValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool resolvedValue;
@property (readonly) Class superclass;

- (void)handleAskForInput:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveDateAndTimeAnswerForAskForInput:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveDateAnswerForAskForInput:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveDefaultURLAnswerForAskForInput:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveNumberAnswerForAskForInput:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveQuestionForAskForInput:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStringAnswerForAskForInput:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTimeAnswerForAskForInput:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTypeForAskForInput:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveUrlAnswerForAskForInput:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)resolvedValue;
- (void)setResolvedValue:(bool)arg1;

@end

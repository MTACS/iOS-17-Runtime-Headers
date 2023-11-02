
@interface WFCoercionAction : WFAction

- (Class)coercionItemClass;
- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;

@end

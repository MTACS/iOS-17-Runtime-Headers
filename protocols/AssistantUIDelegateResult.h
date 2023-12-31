
@protocol AssistantUIDelegateResult

@required

- (void)presentUIForConnectionVerificationResult:(int)arg1 withOptions:(NSDictionary *)arg2;
- (void)presentUIForStepByStepNextStepResult:(int)arg1 withOptions:(NSDictionary *)arg2;
- (void)showUIConfigPromptResult:(int)arg1 withOptions:(NSDictionary *)arg2;

@end

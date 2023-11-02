
@interface WFAskForInputAction : WFHandleCustomIntentAction

@property (nonatomic, readonly) NSString *defaultAnswer;
@property (nonatomic, readonly) bool immediatelyActivateWatchDictation;
@property (nonatomic, readonly) NSString *inputType;
@property (nonatomic, readonly) NSString *promptText;

- (id)appResource;
- (id)datePickerModeFromInputType:(id)arg1;
- (id)defaultAnswer;
- (void)finishRunningWithDate:(id)arg1;
- (void)finishRunningWithResultText:(id)arg1;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)immediatelyActivateWatchDictation;
- (id)inputType;
- (id)outputContentClasses;
- (id)promptText;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

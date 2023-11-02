
@interface HomeAutomationInternal.AutomateHomeIntentHandler : NSObject <AutomateHomeIntentHandling> {
    void climateAttributes;
    void deviceIsSupported;
    void failureNoMatchingEntities;
    void genericErrorResponse;
    void homeKitError;
}

- (void).cxx_destruct;
- (void)confirmAutomateHome:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAutomateHome:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveAutomatableTaskForAutomateHome:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTriggerForAutomateHome:(id)arg1 withCompletion:(id /* block */)arg2;

@end

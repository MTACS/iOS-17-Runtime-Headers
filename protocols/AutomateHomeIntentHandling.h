
@protocol AutomateHomeIntentHandling <NSObject>

@required

- (void)handleAutomateHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AutomateHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AutomateHomeIntentResponse *, void*
- (void)handleAutomateHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AutomateHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AutomateHomeIntentResponse *, void*
- (void)resolveAutomatableTaskForAutomateHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AutomateHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AutomateHomeAutomatableTaskResolutionResult *, void*
- (void)resolveAutomatableTaskForAutomateHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AutomateHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AutomateHomeAutomatableTaskResolutionResult *, void*
- (void)resolveTriggerForAutomateHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AutomateHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AutomateHomeTriggerResolutionResult *, void*
- (void)resolveTriggerForAutomateHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AutomateHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AutomateHomeTriggerResolutionResult *, void*

@optional

- (void)confirmAutomateHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AutomateHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AutomateHomeIntentResponse *, void*
- (void)confirmAutomateHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AutomateHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AutomateHomeIntentResponse *, void*

@end

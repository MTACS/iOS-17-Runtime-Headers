
@interface HomeAutomationInternal.ControlHomeIntentHandler : NSObject <INControlHomeIntentHandling>

- (void)handleControlHome:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveFiltersForControlHome:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveUserTaskForControlHome:(id)arg1 withCompletion:(id /* block */)arg2;

@end

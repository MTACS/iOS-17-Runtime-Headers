
@interface MTSearchTimerIntentHandler : MTTimerIntentHandler <INSearchForTimersIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleSearchForTimers:(id)arg1 completion:(id /* block */)arg2;

@end

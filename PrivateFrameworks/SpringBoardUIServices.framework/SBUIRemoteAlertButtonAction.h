
@interface SBUIRemoteAlertButtonAction : BSAction

@property (nonatomic, readonly) unsigned long long events;

- (unsigned long long)events;
- (id)initWithEvents:(unsigned long long)arg1;
- (id)initWithEvents:(unsigned long long)arg1 withHandler:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendResponseWithUnHandledEvents:(unsigned long long)arg1;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;

@end

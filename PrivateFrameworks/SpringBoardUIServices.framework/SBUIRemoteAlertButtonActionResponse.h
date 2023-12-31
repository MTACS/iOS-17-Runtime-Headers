
@interface SBUIRemoteAlertButtonActionResponse : BSActionResponse

@property (nonatomic, readonly) unsigned long long unHandledEvents;

- (id)initWithUnHandledEvents:(unsigned long long)arg1;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (unsigned long long)unHandledEvents;

@end

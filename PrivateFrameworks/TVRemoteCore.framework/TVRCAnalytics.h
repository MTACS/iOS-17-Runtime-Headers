
@interface TVRCAnalytics : NSObject

+ (id)sharedInstance;

- (id)_connectionDictionaryForType:(id)arg1 status:(id)arg2 reason:(id)arg3;
- (id)_presentationSourceEventDictionaryFor:(id)arg1;
- (id)_spinnerShownDictionaryFor:(id)arg1;
- (void)logConnectingSpinnerShown:(id)arg1;
- (void)logConnectionStatus:(long long)arg1 type:(long long)arg2 reason:(long long)arg3;
- (void)logFindingSessionStatistics:(id)arg1;
- (void)logPresentationFrom:(id)arg1;
- (void)logSearchingSpinnerShown;
- (void)logSessionStatistics:(id)arg1;
- (void)logShortcutActionRunWithType:(id)arg1;

@end


@interface ATXUpdatePredictionsLogger : NSObject {
    NSDate * _now;
    <ATXPETEventTracker2Protocol> * _petLogger;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSDate *now;

- (void).cxx_destruct;
- (int)_clientTypeForUpdatePredictionsClient:(unsigned long long)arg1;
- (id)_countDictionaryDefaultsKeyForClient:(unsigned long long)arg1;
- (id)_countDictionaryForClient:(unsigned long long)arg1;
- (void)_incrementCountInDictionary:(id)arg1 forTriggerType:(int)arg2;
- (id)_lastLogDate;
- (void)_logPredictionUpdatesForClient:(unsigned long long)arg1 lastLogDate:(id)arg2 now:(id)arg3;
- (double)_normalizeCountPer24HoursWithStartDate:(id)arg1 endDate:(id)arg2 count:(unsigned long long)arg3;
- (id)_protobufForTriggerType:(int)arg1 client:(unsigned long long)arg2;
- (void)_resetCountDictionariesForAllClients;
- (void)_setCountDictionary:(id)arg1 forClient:(unsigned long long)arg2;
- (void)_setLastLogDate:(id)arg1;
- (id)_stringForATXUpdatePredictionsClient:(unsigned long long)arg1;
- (int)_triggerTypeForUpdatePredictionsReason:(unsigned long long)arg1;
- (void)countPredictionUpdateWithReason:(unsigned long long)arg1 client:(unsigned long long)arg2;
- (void)flushCountedPredictionUpdatesToLogger;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 petLogger:(id)arg2;
- (id)now;
- (void)setNow:(id)arg1;

@end

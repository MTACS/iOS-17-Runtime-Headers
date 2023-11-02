
@interface ATXCoreDuetLogger : NSObject {
    NSString * _abGroup;
    NSDate * _currentDate;
    _ATXDataStore * _dataStore;
    _ATXDuetHelper * _duetHelper;
    <ATXPETEventTracker2Protocol> * _tracker;
}

- (void).cxx_destruct;
- (id)abGroup;
- (bool)actionTypeIsActivity:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1 duetHelper:(id)arg2 currentDate:(id)arg3 tracker:(id)arg4;
- (void)logCoreDuetActionLogDonationMetrics;
- (void)logDonationCountWithAlogEventCount:(unsigned long long)arg1 forIntents:(bool)arg2;
- (void)logDonationRatioWithDuetEventCount:(unsigned long long)arg1 alogEventCount:(unsigned long long)arg2 forIntents:(bool)arg3;
- (void)setabGroup:(id)arg1;

@end


@interface ATXSetAlarmTimeOfDayDataSource : NSObject {
    ATXHeuristicDevice * _device;
    <_DKKnowledgeQuerying> * _duetStore;
}

+ (id)medianFrom:(id)arg1;
+ (id)timeOfDayFromDonations:(id)arg1;

- (void).cxx_destruct;
- (id)_recentIntentDonationsForBundleId:(id)arg1 limit:(unsigned long long)arg2;
- (void)alarmTimeOfDay:(id /* block */)arg1;
- (id)initWithDevice:(id)arg1;

@end


@interface _HKSPScheduleAndProviderPair : NSObject {
    <HKSPSuggestionProvider> * _provider;
    HKSPSleepSchedule * _schedule;
}

@property (nonatomic, retain) <HKSPSuggestionProvider> *provider;
@property (nonatomic, retain) HKSPSleepSchedule *schedule;

- (void).cxx_destruct;
- (id)provider;
- (id)schedule;
- (void)setProvider:(id)arg1;
- (void)setSchedule:(id)arg1;

@end

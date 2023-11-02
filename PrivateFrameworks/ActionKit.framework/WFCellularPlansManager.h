
@interface WFCellularPlansManager : NSObject {
    CoreTelephonyClient * _client;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSArray *allPlans;
@property (nonatomic, readonly) CoreTelephonyClient *client;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)dataRateToRadioAccessTechnologyModeMapping;
+ (id)modesFromDataRate:(long long)arg1;

- (void).cxx_destruct;
- (id)allPlans;
- (id)client;
- (id)contexts;
- (id)init;
- (id)queue;
- (bool)resetCellularDataStatisticsWithError:(id*)arg1;
- (bool)setAutomaticDataLineSwitching:(bool)arg1 error:(id*)arg2;
- (bool)setDefaultDataLineToPlan:(id)arg1 error:(id*)arg2;
- (bool)setDefaultVoiceLineToPlan:(id)arg1 error:(id*)arg2;
- (bool)setPlanStatus:(bool)arg1 forPlan:(id)arg2 error:(id*)arg3;

@end

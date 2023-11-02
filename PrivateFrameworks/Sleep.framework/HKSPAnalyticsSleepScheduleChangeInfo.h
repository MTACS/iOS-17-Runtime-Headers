
@interface HKSPAnalyticsSleepScheduleChangeInfo : NSObject {
    NSString * _activePairedWatchProductType;
    unsigned long long  _application;
    bool  _isSleepTrackingEnabled;
}

@property (nonatomic, readonly) NSString *activePairedWatchProductType;
@property (nonatomic, readonly) unsigned long long application;
@property (nonatomic, readonly) bool isSleepTrackingEnabled;

- (void).cxx_destruct;
- (id)activePairedWatchProductType;
- (unsigned long long)application;
- (id)applicationPayloadValue;
- (id)initWithApplication:(unsigned long long)arg1 activePairedWatchProductType:(id)arg2 isSleepTrackingEnabled:(bool)arg3;
- (bool)isSleepTrackingEnabled;

@end

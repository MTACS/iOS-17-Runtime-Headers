
@interface PLDiscretionaryIntervalManager : NSObject {
    NSMutableDictionary * _activityNameToInvolvedIdentifiers;
    PLDiscretionaryEnergyMonitor * _discretionaryEnergyMonitor;
    NSMutableDictionary * _identifierToDiscretionaryIntervals;
    NSMutableDictionary * _mockData;
    NSObject<OS_dispatch_source> * _openIntervalTimer;
    NSObject<OS_dispatch_source> * _powerlogReportTimer;
    bool  _quickEnergyEnabled;
}

@property (retain) NSMutableDictionary *activityNameToInvolvedIdentifiers;
@property (nonatomic) PLDiscretionaryEnergyMonitor *discretionaryEnergyMonitor;
@property (retain) NSMutableDictionary *identifierToDiscretionaryIntervals;
@property (retain) NSMutableDictionary *mockData;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *openIntervalTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *powerlogReportTimer;
@property (nonatomic) bool quickEnergyEnabled;

- (void).cxx_destruct;
- (id)activityNameToInvolvedIdentifiers;
- (id)coalesceIntervals:(id)arg1;
- (id)createOpenIntervalTimer;
- (id)createPowerlogReportTimer;
- (void)disableQuickEnergy;
- (id)discretionaryEnergyMonitor;
- (void)enableQuickEnergy;
- (void)handleOpenIntervalTimer;
- (void)handlePowerlogReportTimer;
- (void)handleStartEvent:(id)arg1 withInfo:(id)arg2;
- (void)handleStopEvent:(id)arg1 withInfo:(id)arg2;
- (id)identifierToDiscretionaryIntervals;
- (id)initWithEnergyMonitor:(id)arg1 andMockData:(id)arg2;
- (void)logActivityNameToInvolvedIdentifiers;
- (void)logDiscretionaryIntervals;
- (id)mockData;
- (id)openIntervalTimer;
- (id)powerlogReportTimer;
- (bool)quickEnergyEnabled;
- (void)reportIntervalsToPowerlog;
- (void)reportQuickEnergyForInterval:(id)arg1 withIdentifier:(id)arg2 andAdjustSnapshotToNow:(bool)arg3;
- (void)setActivityNameToInvolvedIdentifiers:(id)arg1;
- (void)setDiscretionaryEnergyMonitor:(id)arg1;
- (void)setIdentifierToDiscretionaryIntervals:(id)arg1;
- (void)setMockData:(id)arg1;
- (void)setOpenIntervalTimer:(id)arg1;
- (void)setPowerlogReportTimer:(id)arg1;
- (void)setQuickEnergyEnabled:(bool)arg1;

@end


@interface BRRTCPairingReportManager : NSObject {
    id /* block */  _archivePairingMetric;
    NSURL * _currentPairingMetricBridgePlistPath;
    NSString * _currentPairingMetricID;
    bool  _metricBusy;
    NSMutableDictionary * _openPairingTimeEvents;
    BRRTCPairingMetric * _pairingMetric;
    bool  _pairingMetricSetup;
    NSMutableArray * _pendingEvents;
    id /* block */  _pendingMetricSubmission;
    NSObject<OS_dispatch_queue> * _queue;
    BRSetupControllerTracker * _setupControllerTracker;
}

@property (nonatomic, copy) id /* block */ archivePairingMetric;
@property (nonatomic, retain) NSURL *currentPairingMetricBridgePlistPath;
@property (nonatomic) NSString *currentPairingMetricID;
@property (nonatomic) bool metricBusy;
@property (nonatomic, retain) NSMutableDictionary *openPairingTimeEvents;
@property (nonatomic, retain) BRRTCPairingMetric *pairingMetric;
@property (nonatomic) bool pairingMetricSetup;
@property (nonatomic, retain) NSMutableArray *pendingEvents;
@property (nonatomic, copy) id /* block */ pendingMetricSubmission;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) BRSetupControllerTracker *setupControllerTracker;

- (void).cxx_destruct;
- (void)_addEvent:(unsigned long long)arg1 withValue:(id)arg2 withError:(id)arg3;
- (void)_addEventToPendingQueue:(unsigned long long)arg1 withValue:(id)arg2;
- (void)_cleanupAfterWrite;
- (bool)_eventClearedForRecord:(unsigned long long)arg1;
- (id)_trimPrecision:(id)arg1;
- (void)_writeToPairingPlist:(id)arg1 withValue:(id)arg2;
- (void)addMetaKeys;
- (void)addPairingTimeEventStringToPairingReportPlist:(unsigned long long)arg1 withValue:(id)arg2 withError:(id)arg3;
- (void)addPairingTimeEventToPairingReportPlist:(unsigned long long)arg1 withValue:(id)arg2 withError:(id)arg3;
- (void)addPendingEventToMetric;
- (id /* block */)archivePairingMetric;
- (void)archivePairingMetric:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)checkInWithClosingPairingTimeEvent:(unsigned long long)arg1;
- (void)checkInWithController:(id)arg1 action:(unsigned long long)arg2;
- (void)checkInWithOpenPairingTimeEvent:(unsigned long long)arg1;
- (void)checkInWithRUIController:(id)arg1;
- (void)cleanUpMetricDirectoryWithCompletion:(id /* block */)arg1;
- (void)clearPendingEventQueue;
- (id)combineMetricPlistsForArchive:(id)arg1;
- (void)completeMetricForAppTermination;
- (void)completePairingMetricWithSuccess:(bool)arg1;
- (void)completeRTCPairingMetricForMetricID:(id)arg1 withSuccess:(id /* block */)arg2;
- (void)createPairingReportPlistWithPairingType:(unsigned long long)arg1;
- (id)currentPairingMetricBridgePlistPath;
- (id)currentPairingMetricID;
- (id)deltaForControllerAction:(id)arg1;
- (void)flagForAutomation;
- (id)initWithPairingBeginsType:(unsigned long long)arg1;
- (void)initializeEndToEndMetric;
- (bool)metricBusy;
- (id)openPairingTimeEvents;
- (id)pairingMetric;
- (bool)pairingMetricSetup;
- (id)pendingEvents;
- (id /* block */)pendingMetricSubmission;
- (id)queue;
- (void)recordSetupController:(id)arg1 action:(unsigned long long)arg2;
- (void)setArchivePairingMetric:(id /* block */)arg1;
- (void)setCurrentPairingMetricBridgePlistPath:(id)arg1;
- (void)setCurrentPairingMetricID:(id)arg1;
- (void)setMetricBusy:(bool)arg1;
- (void)setOpenPairingTimeEvents:(id)arg1;
- (void)setPairingMetric:(id)arg1;
- (void)setPairingMetricSetup:(bool)arg1;
- (void)setPendingEvents:(id)arg1;
- (void)setPendingMetricSubmission:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setSetupControllerTracker:(id)arg1;
- (id)setupControllerTracker;
- (void)setupPairingMetric:(unsigned long long)arg1;
- (void)submitAnyPendingMetrics;
- (id)truncateSetupControllerClassName:(id)arg1;
- (void)writeDeltasForSetupControllerActions:(id)arg1 action:(unsigned long long)arg2;
- (void)writePushOrHoldToPairingPlist:(id)arg1 action:(unsigned long long)arg2;

@end

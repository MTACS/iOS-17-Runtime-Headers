
@interface TAVisitState : NSObject <NSSecureCoding> {
    NSMutableDictionary * _importantLois;
    TACircularBuffer * _interVisitMetricSnapshotBuffer;
    TAInterVisitMetricsSnapshot * _interVisitMetricsSnapshotBackup;
    unsigned long long  _lastStateTransition;
    NSMutableArray * _nextPredictedLOIs;
    NSHashTable * _observers;
    TAScanRequest * _scanRequest;
    TAVisitStateSettings * _settings;
    unsigned long long  _state;
    TACircularBuffer * _visitSnapshotBuffer;
}

@property (nonatomic, readonly) NSMutableDictionary *importantLois;
@property (nonatomic, readonly) TACircularBuffer *interVisitMetricSnapshotBuffer;
@property (nonatomic, retain) TAInterVisitMetricsSnapshot *interVisitMetricsSnapshotBackup;
@property (nonatomic, readonly) bool isInSensitiveVisit;
@property (nonatomic, readonly) unsigned long long lastStateTransition;
@property (nonatomic, retain) NSMutableArray *nextPredictedLOIs;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) TAScanRequest *scanRequest;
@property (nonatomic, retain) TAVisitStateSettings *settings;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) TACircularBuffer *visitSnapshotBuffer;

+ (bool)supportsSecureCoding;
+ (id)visitStateTypeToString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)closeLatestInterVisitSnapshotWithStore:(id)arg1 arrivalVisit:(id)arg2;
- (void)closeVisitSnapshotWithStore:(id)arg1 visit:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)evaluateLatestVisitSnapshotAndRecoverIfNecessaryWithStore:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
- (id)getDisplayEventsWithFirstPrecedingInInterval:(id)arg1 store:(id)arg2;
- (id)getLatestValidVisit;
- (id)getLatestValidVisitArrivalDate;
- (id)getLatestValidVisitDepartureDate;
- (id)importantLois;
- (void)ingestTAEvent:(id)arg1 store:(id)arg2 appendOutgoingRequestsTo:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1 scanRequestSettings:(id)arg2;
- (id)interVisitMetricSnapshotBuffer;
- (id)interVisitMetricsSnapshotBackup;
- (bool)isEqual:(id)arg1;
- (bool)isInSensitiveVisit;
- (void)issueInterVisitScanRequestIfNecessaryWithClosedSnapshot:(id)arg1 store:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3;
- (void)issueVisitEntryScanRequestIfNecessaryWithOpenSnapshot:(id)arg1 clock:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3;
- (void)labelLoiTypeForLastVisitSnapshot:(id)arg1;
- (unsigned long long)lastStateTransition;
- (void)mergeWithAnotherTAVisitState:(id)arg1;
- (id)nextPredictedLOIs;
- (void)notifyObserversOfMetricsHint:(unsigned long long)arg1;
- (void)notifyObserversOfStateChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)observers;
- (void)openInterVisitBackupSnapshotWithArrivalVisit:(id)arg1;
- (void)openInterVisitSnapshotWithStore:(id)arg1 departureVisit:(id)arg2;
- (void)openVisitSnapshotWithStore:(id)arg1 visit:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3;
- (void)performStateTransitionDecision:(unsigned long long)arg1 store:(id)arg2 visit:(id)arg3 andAppendOutgoingRequestsTo:(id)arg4;
- (void)purgeInterVisitSnapshotBufferWithCurrentDate:(id)arg1;
- (void)purgeVisitSnapshotBufferWithCurrentDate:(id)arg1;
- (void)purgeWithClock:(id)arg1;
- (void)recoverInterVisitSnapshotWithArrivalVisit:(id)arg1 store:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)resetInterVisitBackupSnapshot;
- (id)scanRequest;
- (void)setInterVisitMetricsSnapshotBackup:(id)arg1;
- (void)setNextPredictedLOIs:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setScanRequest:(id)arg1;
- (void)setSettings:(id)arg1;
- (bool)setState:(unsigned long long)arg1;
- (id)settings;
- (bool)shouldCreateNewVisitSnapshotFromUnknownState:(id)arg1;
- (unsigned long long)state;
- (unsigned long long)stateTransitionDecisionGivenTACLVisit:(id)arg1;
- (void)updateImportantLOIs:(id)arg1 currentDate:(id)arg2;
- (void)updateInterVisitBackupSnapshotWithStore:(id)arg1;
- (void)updateInterVisitSnapshot:(id)arg1 store:(id)arg2;
- (void)updateInterVisitSnapshotWithStore:(id)arg1;
- (id)visitSnapshotBuffer;

@end

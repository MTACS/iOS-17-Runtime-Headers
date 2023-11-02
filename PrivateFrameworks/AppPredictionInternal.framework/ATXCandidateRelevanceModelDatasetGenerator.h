
@interface ATXCandidateRelevanceModelDatasetGenerator : NSObject <ATXCandidateRelevanceModelDatasetGeneratorProtocol> {
    BPSPublisher * _bluetoothPublisher;
    ATXCandidateRelevanceModelDatasetGeneratorConfig * _config;
    BPSPublisher * _contextPublisher;
    BPSPublisher * _microlocationVisitPublisher;
    BPSPublisher * _modePublisher;
    BPSPublisher * _poiCategoryPublisher;
    BPSPublisher * _userFocusComputedModePublisher;
}

@property (nonatomic, retain) BPSPublisher *bluetoothPublisher;
@property (nonatomic, retain) ATXCandidateRelevanceModelDatasetGeneratorConfig *config;
@property (nonatomic, retain) BPSPublisher *contextPublisher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BPSPublisher *microlocationVisitPublisher;
@property (nonatomic, retain) BPSPublisher *modePublisher;
@property (nonatomic, retain) BPSPublisher *poiCategoryPublisher;
@property (readonly) Class superclass;
@property (nonatomic, retain) BPSPublisher *userFocusComputedModePublisher;

+ (id)candidateDataPointsForSession:(id)arg1 candidate:(id)arg2;
+ (id)candidateDataPointsForSessions:(id)arg1 candidate:(id)arg2;
+ (id)dataPointPublisher:(id)arg1;
+ (id)eventAndRecentContextPublisher:(id)arg1;
+ (bool)isContextMismatchForPreviousContext:(id)arg1 currentContext:(id)arg2;

- (void).cxx_destruct;
- (id)bluetoothPublisher;
- (id)candidateDatasetStream;
- (id)config;
- (id)contextPublisher;
- (id)initWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1 contextPublisher:(id)arg2 modePublisher:(id)arg3 poiCategoryPublisher:(id)arg4 bluetoothPublisher:(id)arg5 userFocusComputedModePublisher:(id)arg6 microlocationVisitPublisher:(id)arg7;
- (id)microlocationVisitPublisher;
- (id)modePublisher;
- (id)poiCategoryPublisher;
- (void)receiveCandidateDataPoint:(id /* block */)arg1 completion:(id /* block */)arg2 candidate:(id)arg3;
- (void)receiveDataPoint:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)receiveDatasetSession:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setBluetoothPublisher:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setContextPublisher:(id)arg1;
- (void)setMicrolocationVisitPublisher:(id)arg1;
- (void)setModePublisher:(id)arg1;
- (void)setPoiCategoryPublisher:(id)arg1;
- (void)setUserFocusComputedModePublisher:(id)arg1;
- (id)userFocusComputedModePublisher;

@end

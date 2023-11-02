
@interface ATXAnchorModelPhase3Trainer : NSObject <ATXAnchorModelPhase3TrainerProtocol> {
    ATXAnchor * _anchor;
    ATXAnchorModelHyperParameters * _hyperParameters;
    ATXAnchorModelDataStoreWrapper * _storeWrapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)endSecondsAfterAnchorGivenHistoricalOffsets:(id)arg1;
- (double)endSecondsAfterAnchorGivenHistoricalOffsets:(id)arg1 startSecondsAfterAnchor:(double)arg2;
- (unsigned long long)indexOfPercentile:(double)arg1 array:(id)arg2;
- (id)initForAnchor:(id)arg1;
- (id)initForAnchor:(id)arg1 anchorModelDataStoreWrapper:(id)arg2;
- (double)startSecondsAfterAnchorGivenHistoricalOffsets:(id)arg1;
- (id)trainPhase3ForCandidate:(id)arg1;

@end

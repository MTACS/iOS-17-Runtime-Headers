
@interface PMLAWDLogisticRegTrackerMock : PMLProtoBufTracker {
    PMLTrackerMockAdapter * _adapter;
}

@property (nonatomic, readonly) NSArray *trackedGradients;
@property (nonatomic, readonly) NSArray *trackedWeights;

+ (id)mockTracker;
+ (id)mockTrackerForPlanId:(id)arg1;

- (void).cxx_destruct;
- (void)clearTrackedMessages;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;
- (id)initWithModel:(id)arg1;
- (id)trackedGradients;
- (id)trackedWeights;

@end

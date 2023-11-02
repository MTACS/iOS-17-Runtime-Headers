
@interface CATIDSServiceConnectionDataAggregation : NSObject {
    unsigned long long  _dataNumber;
    <CATIDSServiceConnectionDataAggregationDelegate> * _delegate;
    NSData * _totalData;
    NSMutableDictionary * mDataSegmentsBySegmentNumber;
    NSMutableSet * mPendingSegmentNumbers;
    bool  mPerformedInitialHydration;
    NSNumber * mStartingSequenceNumber;
    NSNumber * mTotalSegments;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (nonatomic) unsigned long long dataNumber;
@property (nonatomic) <CATIDSServiceConnectionDataAggregationDelegate> *delegate;
@property (nonatomic, copy) NSData *totalData;

- (void).cxx_destruct;
- (unsigned long long)dataNumber;
- (id)delegate;
- (id)description;
- (void)finishAggregating;
- (void)hydratePendingNumbersWithContent:(id)arg1;
- (void)hydrateStartingSequenceNumber:(id)arg1;
- (void)hydrateWithContentIfNeededWithContent:(id)arg1;
- (id)initWithWorkQueue:(id)arg1;
- (id)pendingSequenceNumbersDescription;
- (void)setDataNumber:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTotalData:(id)arg1;
- (id)totalData;
- (void)updateWithDataContent:(id)arg1;

@end

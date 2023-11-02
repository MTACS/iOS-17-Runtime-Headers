
@interface BRCPCSChainBatchInfo : NSObject {
    NSMutableSet * _alreadyHalfChainedRecords;
    BRCAppLibrary * _appLibrary;
    NSMutableArray * _fullyChainRecordBatch;
    NSMutableDictionary * _fullyChainRecordInfoMap;
    NSMutableDictionary * _halfChainedRecordMap;
    NSMutableArray * _recordsForFirstPhase;
    bool  _should2PhasePCSChain;
}

@property (nonatomic, readonly) unsigned long long batchCount;
@property (nonatomic, readonly) unsigned long long chainedRecordsCount;
@property (nonatomic, readonly) NSDictionary *halfChainedRecordMap;
@property (nonatomic, readonly) NSArray *recordsForFirstPhase;
@property (nonatomic, readonly) NSArray *recordsForSecondPhase;
@property (nonatomic, readonly) bool should2PhasePCSChain;

- (void).cxx_destruct;
- (void)_chainPreppedRecordToParent:(id)arg1;
- (void)addFullyChainedRecordInfo:(id)arg1;
- (unsigned long long)batchCount;
- (void)chainPreparedRecordBatch:(id)arg1;
- (unsigned long long)chainedRecordsCount;
- (bool)containsRecordInfo:(id)arg1;
- (id)halfChainedRecordMap;
- (id)initWithAppLibrary:(id)arg1;
- (void)prepareFirstPhaseRecordBatch;
- (id)recordsForFirstPhase;
- (id)recordsForSecondPhase;
- (bool)should2PhasePCSChain;

@end

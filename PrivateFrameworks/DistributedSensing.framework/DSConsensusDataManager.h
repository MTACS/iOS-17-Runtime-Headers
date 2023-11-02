
@interface DSConsensusDataManager : NSObject {
    NSMutableArray * _consensusDataArray;
    NSMutableDictionary * _consensusDataArrayMap;
    NSMutableDictionary * _consensusFrequencyTable;
    double  _windowOfInterest;
}

@property (nonatomic, retain) NSMutableArray *consensusDataArray;
@property (nonatomic, retain) NSMutableDictionary *consensusDataArrayMap;
@property (nonatomic, retain) NSMutableDictionary *consensusFrequencyTable;

- (void).cxx_destruct;
- (void)_addDatumToFrequencyTable:(id)arg1;
- (void)_addDatumtoDataArrayMap:(id)arg1;
- (void)_evictOldestDatum;
- (void)_removeDatumFromDataArrayMap:(id)arg1;
- (void)_removeDatumFromFrequencyTable:(id)arg1;
- (void)addDatum:(id)arg1;
- (id)consensusDataArray;
- (id)consensusDataArrayMap;
- (id)consensusFrequencyTable;
- (id)initWithWindowOfInterest:(double)arg1;
- (void)printConsensusData;
- (void)printConsensusDataFromWindowStart:(double)arg1 ToWindowEnd:(double)arg2;
- (void)setConsensusDataArray:(id)arg1;
- (void)setConsensusDataArrayMap:(id)arg1;
- (void)setConsensusFrequencyTable:(id)arg1;

@end

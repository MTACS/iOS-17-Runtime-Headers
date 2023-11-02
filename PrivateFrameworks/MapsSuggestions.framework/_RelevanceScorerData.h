
@interface _RelevanceScorerData : NSObject {
    NSMutableArray * _addresses;
    NSMutableArray * _finalRelevanceScores;
    NSMutableArray * _indexMapping;
    unsigned long long  _inputCount;
    NSMutableArray * _mapItems;
    NSMutableArray * _names;
}

@property (nonatomic, retain) NSMutableArray *addresses;
@property (nonatomic, retain) NSMutableArray *finalRelevanceScores;
@property (nonatomic, retain) NSMutableArray *indexMapping;
@property (nonatomic) unsigned long long inputCount;
@property (nonatomic, retain) NSMutableArray *mapItems;
@property (nonatomic, retain) NSMutableArray *names;

- (void).cxx_destruct;
- (id)addresses;
- (id)finalRelevanceScores;
- (id)indexMapping;
- (id)initWithNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3;
- (unsigned long long)inputCount;
- (id)mapItems;
- (id)names;
- (void)setAddresses:(id)arg1;
- (void)setFinalRelevanceScores:(id)arg1;
- (void)setIndexMapping:(id)arg1;
- (void)setInputCount:(unsigned long long)arg1;
- (void)setMapItems:(id)arg1;
- (void)setNames:(id)arg1;

@end

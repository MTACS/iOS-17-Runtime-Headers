
@interface _CPResultRankingFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPResultRankingFeedback> {
    NSArray * _duplicateResults;
    NSArray * _hiddenResults;
    unsigned int  _localResultPosition;
    double  _personalizationScore;
    _CPSearchResultForFeedback * _result;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *duplicateResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *hiddenResults;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int localResultPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, retain) _CPSearchResultForFeedback *result;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addDuplicateResults:(id)arg1;
- (void)addHiddenResults:(id)arg1;
- (void)clearDuplicateResults;
- (void)clearHiddenResults;
- (id)duplicateResults;
- (id)duplicateResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateResultsCount;
- (unsigned long long)hash;
- (id)hiddenResults;
- (id)hiddenResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hiddenResultsCount;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)localResultPosition;
- (double)personalizationScore;
- (bool)readFrom:(id)arg1;
- (id)result;
- (void)setDuplicateResults:(id)arg1;
- (void)setHiddenResults:(id)arg1;
- (void)setLocalResultPosition:(unsigned int)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setResult:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

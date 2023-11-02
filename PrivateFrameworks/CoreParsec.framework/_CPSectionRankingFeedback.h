
@interface _CPSectionRankingFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSectionRankingFeedback> {
    unsigned int  _localSectionPosition;
    double  _personalizationScore;
    NSArray * _results;
    _CPResultSectionForFeedback * _section;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int localSectionPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, copy) NSArray *results;
@property (nonatomic, retain) _CPResultSectionForFeedback *section;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)localSectionPosition;
- (double)personalizationScore;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (id)section;
- (void)setLocalSectionPosition:(unsigned int)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setResults:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end


@interface HLPHelpSearchResult : NSObject {
    NSString * _identifier;
    long long  _matchCount;
    double  _relevanceScore;
    long long  _weight;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long matchCount;
@property (nonatomic) double relevanceScore;
@property (nonatomic) long long weight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)identifier;
- (long long)matchCount;
- (double)relevanceScore;
- (void)setIdentifier:(id)arg1;
- (void)setMatchCount:(long long)arg1;
- (void)setRelevanceScore:(double)arg1;
- (void)setWeight:(long long)arg1;
- (long long)weight;

@end

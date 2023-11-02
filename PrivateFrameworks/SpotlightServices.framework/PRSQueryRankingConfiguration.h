
@interface PRSQueryRankingConfiguration : NSObject {
    bool  _allowAnonymousDataCollection;
    unsigned long long  _dominantRankingQueryCount;
    unsigned long long  _dominatedRankingQueryCount;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _fuzzyMatchCheck;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _fuzzyMatchMask;
    unsigned long long  _highMatchBit;
    unsigned long long  _highRecencyBit;
    unsigned long long  _lowMatchBit;
    unsigned long long  _lowRecencyBit;
    double  _maxAge;
    double  _minCount;
    double  _minL2Score;
    unsigned long long  _rankingBitCount;
    NSArray * _rankingQueries;
    NSOrderedSet * _requiredAttributes;
    unsigned long long  _shortcutBit;
    unsigned long long  _strongRankingQueryCount;
}

@property (nonatomic) bool allowAnonymousDataCollection;
@property (nonatomic) unsigned long long dominantRankingQueryCount;
@property (nonatomic) unsigned long long dominatedRankingQueryCount;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*fuzzyMatchCheck;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*fuzzyMatchMask;
@property (nonatomic) unsigned long long highMatchBit;
@property (nonatomic) unsigned long long highRecencyBit;
@property (nonatomic) unsigned long long lowMatchBit;
@property (nonatomic) unsigned long long lowRecencyBit;
@property (nonatomic) double maxAge;
@property (nonatomic) double minCount;
@property (nonatomic) double minL2Score;
@property (nonatomic) unsigned long long rankingBitCount;
@property (nonatomic, retain) NSArray *rankingQueries;
@property (nonatomic, retain) NSOrderedSet *requiredAttributes;
@property (nonatomic) unsigned long long shortcutBit;
@property (nonatomic) unsigned long long strongRankingQueryCount;

+ (void)updateMailVIP:(id)arg1 phoneFavorites:(id)arg2 meEmailAddresses:(id)arg3;

- (void).cxx_destruct;
- (bool)allowAnonymousDataCollection;
- (unsigned long long)dominantRankingQueryCount;
- (unsigned long long)dominatedRankingQueryCount;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)fuzzyMatchCheck;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)fuzzyMatchMask;
- (unsigned long long)highMatchBit;
- (unsigned long long)highRecencyBit;
- (unsigned long long)lowMatchBit;
- (unsigned long long)lowRecencyBit;
- (double)maxAge;
- (double)minCount;
- (double)minL2Score;
- (unsigned long long)rankingBitCount;
- (id)rankingQueries;
- (id)requiredAttributes;
- (void)setAllowAnonymousDataCollection:(bool)arg1;
- (void)setDominantRankingQueryCount:(unsigned long long)arg1;
- (void)setDominatedRankingQueryCount:(unsigned long long)arg1;
- (void)setFuzzyMatchCheck:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setFuzzyMatchMask:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setHighMatchBit:(unsigned long long)arg1;
- (void)setHighRecencyBit:(unsigned long long)arg1;
- (void)setLowMatchBit:(unsigned long long)arg1;
- (void)setLowRecencyBit:(unsigned long long)arg1;
- (void)setMaxAge:(double)arg1;
- (void)setMinCount:(double)arg1;
- (void)setMinL2Score:(double)arg1;
- (void)setRankingBitCount:(unsigned long long)arg1;
- (void)setRankingQueries:(id)arg1;
- (void)setRequiredAttributes:(id)arg1;
- (void)setShortcutBit:(unsigned long long)arg1;
- (void)setStrongRankingQueryCount:(unsigned long long)arg1;
- (unsigned long long)shortcutBit;
- (unsigned long long)strongRankingQueryCount;

@end

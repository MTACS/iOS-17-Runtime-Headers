
@interface SGMINaiveBayesModelQueryResult : NSObject {
    NSArray * _bigramQueriedTokensCount;
    SGMITokenCounts * _bigramTokenCounts;
    SGMITokenCounts * _mailCount;
    double  _oldestTokenAge;
    NSArray * _unigramQueriedTokensCount;
    SGMITokenCounts * _unigramTokenCounts;
}

@property (readonly) NSArray *bigramQueriedTokensCount;
@property (readonly) SGMITokenCounts *bigramTokenCounts;
@property (readonly) SGMITokenCounts *mailCount;
@property (readonly) double oldestTokenAge;
@property (readonly) NSArray *unigramQueriedTokensCount;
@property (readonly) SGMITokenCounts *unigramTokenCounts;

- (void).cxx_destruct;
- (id)bigramQueriedTokensCount;
- (id)bigramTokenCounts;
- (id)inferProbability;
- (id)initWithMailCount:(id)arg1 unigramTokenCounts:(id)arg2 bigramTokenCounts:(id)arg3 unigramQueriedTokensCount:(id)arg4 bigramQueriedTokensCount:(id)arg5 oldestTokenAge:(double)arg6;
- (id)mailCount;
- (double)oldestTokenAge;
- (id)unigramQueriedTokensCount;
- (id)unigramTokenCounts;

@end

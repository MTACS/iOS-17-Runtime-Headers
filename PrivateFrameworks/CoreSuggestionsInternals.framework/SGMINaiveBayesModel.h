
@interface SGMINaiveBayesModel : NSObject {
    SGMITokenCounts * _bigramTokenCounts;
    NSMutableDictionary * _bigramTokensCount;
    SGMITokenCounts * _mailCount;
    SGMITokenCounts * _unigramTokenCounts;
    NSMutableDictionary * _unigramTokensCount;
}

@property (readonly) SGMITokenCounts *bigramTokenCounts;
@property (readonly) NSMutableDictionary *bigramTokensCount;
@property (readonly) SGMITokenCounts *mailCount;
@property (readonly) SGMITokenCounts *unigramTokenCounts;
@property (readonly) NSMutableDictionary *unigramTokensCount;

- (void).cxx_destruct;
- (id)bigramTokenCounts;
- (id)bigramTokensCount;
- (void)ingestUnigramTokens:(id)arg1 bigramTokens:(id)arg2 asSalient:(bool)arg3;
- (id)init;
- (id)initWithMailCount:(id)arg1 unigramTokenCounts:(id)arg2 bigramTokenCounts:(id)arg3 unigramTokensCount:(id)arg4 bigramTokensCount:(id)arg5;
- (id)mailCount;
- (id)unigramTokenCounts;
- (id)unigramTokensCount;

@end


@interface ICRankingQueryDescriptor : NSObject <NSCopying> {
    unsigned long long  _displayedMatchedFields;
    NSArray * _expandedTokens;
    unsigned long long  _purpose;
    NSArray * _queryFields;
    NSString * _rankingQuery;
    NSString * _rankingQueryFlags;
    long long  _rankingQueryType;
}

@property (nonatomic, readonly) unsigned long long displayedMatchedFields;
@property (nonatomic, readonly) NSArray *expandedTokens;
@property (nonatomic, readonly) unsigned long long purpose;
@property (nonatomic, readonly) NSArray *queryFields;
@property (nonatomic, retain) NSString *rankingQuery;
@property (nonatomic, readonly) NSString *rankingQueryFlags;
@property (nonatomic, readonly) long long rankingQueryType;
@property (nonatomic, readonly) NSArray *tokens;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)displayedMatchedFields;
- (id)expandedTokens;
- (id)initWithQueryFields:(id)arg1 expandedTokens:(id)arg2 rankingQueryType:(long long)arg3 rankingQueryFlags:(id)arg4 displayedMatchedFields:(unsigned long long)arg5 purpose:(unsigned long long)arg6;
- (id)initWithQueryFields:(id)arg1 expandedTokens:(id)arg2 rankingQueryType:(long long)arg3 rankingQueryFlags:(id)arg4 purpose:(unsigned long long)arg5;
- (unsigned long long)purpose;
- (id)queryFields;
- (id)rankingQuery;
- (id)rankingQueryFlags;
- (id)rankingQueryForQueryField:(id)arg1 tokenString:(id)arg2;
- (long long)rankingQueryType;
- (double)rankingScoreForSearchResultType:(unsigned long long)arg1;
- (void)setRankingQuery:(id)arg1;
- (id)tokens;

@end

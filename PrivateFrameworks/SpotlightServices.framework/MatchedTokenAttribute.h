
@interface MatchedTokenAttribute : NSObject {
    NSArray * _matchedTypes;
    NSArray * _queryPositions;
    SSTokenizedString * _token;
    unsigned long long  _tokenLength;
    unsigned long long  _tokenNum;
}

@property (nonatomic, retain) NSArray *matchedTypes;
@property (nonatomic, retain) NSArray *queryPositions;
@property (nonatomic, retain) SSTokenizedString *token;
@property unsigned long long tokenLength;
@property unsigned long long tokenNum;

- (void).cxx_destruct;
- (id)initMatchedToken:(id)arg1 query:(id)arg2 matchedType:(id)arg3;
- (id)matchedTypes;
- (id)queryPositions;
- (void)setMatchedTypes:(id)arg1;
- (void)setQueryPositions:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenLength:(unsigned long long)arg1;
- (void)setTokenNum:(unsigned long long)arg1;
- (id)token;
- (unsigned long long)tokenLength;
- (unsigned long long)tokenNum;

@end

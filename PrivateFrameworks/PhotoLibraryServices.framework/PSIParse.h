
@interface PSIParse : NSObject {
    PSIDateFilter * _dateFilter;
    NSString * _string;
    NSArray * _tokens;
}

@property (nonatomic, copy) PSIDateFilter *dateFilter;
@property (nonatomic, readonly) NSArray *datedTokens;
@property (nonatomic, readonly) bool isImplicitlyTokenizedParse;
@property (nonatomic, readonly) unsigned long long numberOfTokens;

- (void).cxx_destruct;
- (id)dateFilter;
- (id)datedTokens;
- (id)description;
- (id)descriptionWithToken:(id)arg1;
- (void)enumerateTokensUsingBlock:(id /* block */)arg1;
- (id)initWithToken:(id)arg1;
- (id)initWithTokens:(id)arg1 fromString:(id)arg2;
- (bool)isImplicitlyTokenizedParse;
- (unsigned long long)numberOfTokens;
- (id)parseByReplacingTokenAtIndex:(unsigned long long)arg1 withToken:(id)arg2;
- (id)parseByReplacingTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withTokens:(id)arg2;
- (void)setDateFilter:(id)arg1;
- (id)tokenAtIndex:(unsigned long long)arg1;

@end

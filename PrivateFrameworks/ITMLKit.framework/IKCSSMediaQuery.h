
@interface IKCSSMediaQuery : NSObject {
    bool  _evaluated;
    bool  _evaluationResult;
    IKCSSMediaQueryList * _queryList;
}

@property (readonly) bool evaluated;
@property (readonly) bool evaluationResult;
@property (nonatomic, readonly) IKCSSMediaQueryList *queryList;

+ (id)buildMediaQuery:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3;
+ (id)buildMediaQueryExpression:(id)arg1;
+ (id)buildMediaQueryList:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3;
+ (id)mediaQueryFromTokenList:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)evaluate;
- (bool)evaluated;
- (bool)evaluationResult;
- (id)initWithQueryList:(id)arg1;
- (id)queryExpression;
- (id)queryList;
- (void)setNeedsReEvaluation;

@end


@interface PGTitleGeneratorTypeMatching : NSObject {
    id /* block */  _eventEvaluationBlock;
    long long  _type;
}

@property (nonatomic, readonly, copy) id /* block */ eventEvaluationBlock;
@property (nonatomic, readonly) long long type;

+ (id)typeMatchingWithType:(long long)arg1 eventEvaluationBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)eventEvaluationBlock;
- (id)initWithType:(long long)arg1 eventEvaluationBlock:(id /* block */)arg2;
- (long long)type;

@end

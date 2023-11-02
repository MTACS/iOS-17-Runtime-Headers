
@interface REConditionalRelevanceProvider : RERelevanceProvider {
    RERelevanceCondition * _condition;
}

@property (nonatomic, readonly) RERelevanceCondition *condition;

- (void).cxx_destruct;
- (float)_evaluateCondition;
- (unsigned long long)_hash;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRelevanceCondition:(id)arg1;
- (bool)isEqual:(id)arg1;

@end


@interface RERelevanceCondition : NSObject <NSCopying> {
    id /* block */  _condition;
}

+ (id)conditionWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (float)_evaluateRelevanceWithEnvironment:(id)arg1;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCondtionBlock:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;

@end

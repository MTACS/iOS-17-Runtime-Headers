
@interface TPSTargetingValidation : NSObject <TPSValidatable> {
    NSString * _identifier;
    bool  _ignoreCache;
    long long  _joinType;
    NSString * _name;
    NSDictionary * _targetContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool ignoreCache;
@property (nonatomic) long long joinType;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *targetContext;

- (void).cxx_destruct;
- (id)arrayValue;
- (bool)boolValue;
- (void)cancel;
- (id)description;
- (void)getCurrentStateWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (bool)ignoreCache;
- (id)initWithTargetContext:(id)arg1;
- (long long)integerValue;
- (long long)joinType;
- (id)key;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setIgnoreCache:(bool)arg1;
- (void)setJoinType:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setTargetContext:(id)arg1;
- (id)stringValue;
- (id)targetContext;
- (unsigned long long)unsignedIntegerValue;
- (void)validateWithCompletion:(id /* block */)arg1;
- (id)value;

@end


@interface DKComponentPredicate : NSObject {
    NSString * _domain;
    bool  _exactMatch;
    NSString * _identifier;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) bool exactMatch;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *type;

+ (id)componentPredicateMatchingComponentIdentity:(id)arg1;
+ (id)componentPredicateWithDomain:(id)arg1 exactMatch:(bool)arg2;
+ (id)componentPredicateWithType:(id)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (id)domain;
- (bool)exactMatch;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDomain:(id)arg1 exactMatch:(bool)arg2;
- (id)initWithType:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComponentPredicate:(id)arg1;
- (bool)matchesComponentIdentity:(id)arg1;
- (id)type;

@end

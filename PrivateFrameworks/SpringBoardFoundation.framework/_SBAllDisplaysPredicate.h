
@interface _SBAllDisplaysPredicate : SBDisplayModePredicate

+ (id)fromDefaultsKey:(id)arg1;
+ (id)sharedInstance;

- (id)defaultsKeyRepresentation;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)matchesDisplay:(id)arg1;

@end

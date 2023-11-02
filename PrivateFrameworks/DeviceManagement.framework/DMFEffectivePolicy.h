
@interface DMFEffectivePolicy : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _currentPoliciesByIdentifier;
    long long  _defaultPolicy;
    unsigned long long  _defaultPriority;
    NSSet * _excludedIdentifiers;
    NSDictionary * _prioritiesByIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSDictionary *currentPoliciesByIdentifier;
@property (nonatomic, readonly) long long defaultPolicy;
@property (nonatomic, readonly) unsigned long long defaultPriority;
@property (nonatomic, readonly) bool downtimeEnforced;
@property (nonatomic, readonly, copy) NSSet *excludedIdentifiers;
@property (nonatomic, readonly, copy) NSDictionary *prioritiesByIdentifier;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)downtimeCategoryIdentifiers;
+ (bool)supportsSecureCoding;
+ (id)systemCategoryIdentifiers;
+ (id)unblockableBundleIdentifiers;
+ (id)unblockableCategoryIdentifiers;

- (void).cxx_destruct;
- (id)_valueForMatchingHostName:(id)arg1 inRegisteredHostNames:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentPoliciesByIdentifier;
- (long long)defaultPolicy;
- (unsigned long long)defaultPriority;
- (bool)downtimeEnforced;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedIdentifiers;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 defaultPolicy:(long long)arg2 currentPoliciesByIdentifier:(id)arg3 defaultPriority:(unsigned long long)arg4 prioritiesByIdentifier:(id)arg5 excludedIdentifiers:(id)arg6;
- (bool)isEqual:(id)arg1;
- (long long)policyForHostName:(id)arg1;
- (long long)policyForIdentifier:(id)arg1 excludableIdentifiers:(id)arg2;
- (id)prioritiesByIdentifier;
- (unsigned long long)priorityForHostName:(id)arg1;
- (long long)priorityForIdentifier:(id)arg1;
- (id)type;

@end

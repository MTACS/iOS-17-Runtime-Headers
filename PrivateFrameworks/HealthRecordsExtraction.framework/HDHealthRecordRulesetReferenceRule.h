
@interface HDHealthRecordRulesetReferenceRule : NSObject {
    NSSet * _allowedResourceTypes;
    long long  _appliesTo;
    NSSet * _disallowedResourceTypes;
    NSString * _keyPath;
}

@property (nonatomic, readonly, copy) NSSet *allowedResourceTypes;
@property (nonatomic, readonly) long long appliesTo;
@property (nonatomic, readonly, copy) NSSet *disallowedResourceTypes;
@property (nonatomic, readonly, copy) NSString *keyPath;

+ (id)referenceRulesetsForRules:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)allowedResourceTypes;
- (long long)appliesTo;
- (id)description;
- (id)disallowedResourceTypes;
- (unsigned long long)hash;
- (id)initWithKeyPath:(id)arg1 allowedTypes:(id)arg2 disallowedTypes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyPath;

@end

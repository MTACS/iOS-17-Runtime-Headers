
@interface HKOAuth2ScopeSet : NSObject {
    bool  _canReadAllResourceTypes;
    bool  _canWriteAllResourceTypes;
    bool  _hasAtLeastOneResourceTypeScope;
    NSSet * _originalScopes;
    NSSet * _readableResourceTypes;
    NSSet * _writableResourceTypes;
}

@property (nonatomic, readonly) bool canReadAllResourceTypes;
@property (nonatomic, readonly) bool canWriteAllResourceTypes;
@property (nonatomic, readonly) bool hasAtLeastOneResourceTypeScope;
@property (nonatomic, readonly) bool hasClinicalSharingScopes;
@property (nonatomic, readonly, copy) NSSet *originalScopes;
@property (nonatomic, readonly, copy) NSSet *readableResourceTypes;
@property (nonatomic, readonly, copy) NSSet *writableResourceTypes;

+ (unsigned long long)_nonWildcardReadCompare:(id)arg1 to:(id)arg2;
+ (unsigned long long)_nonWildcardWriteCompare:(id)arg1 to:(id)arg2;
+ (unsigned long long)_readCompare:(id)arg1 to:(id)arg2;
+ (unsigned long long)_writeCompare:(id)arg1 to:(id)arg2;
+ (unsigned long long)compare:(id)arg1 to:(id)arg2;
+ (id)scopeSetWithScopeString:(id)arg1;
+ (id)scopeSetWithScopes:(id)arg1;
+ (id)scopesFromScopeString:(id)arg1;

- (void).cxx_destruct;
- (bool)canReadAllResourceTypes;
- (bool)canReadResourceType:(id)arg1;
- (bool)canWriteAllResourceTypes;
- (bool)canWriteResourceType:(id)arg1;
- (unsigned long long)compareTo:(id)arg1;
- (id)description;
- (bool)hasAtLeastOneResourceTypeScope;
- (bool)hasClinicalSharingScopes;
- (id)init;
- (id)initWithOriginalScopes:(id)arg1 readableResourceTypes:(id)arg2 writableResourceTypes:(id)arg3 canReadAllResourceTypes:(bool)arg4 canWriteAllResourceTypes:(bool)arg5 hasAtLeastOneResourceTypeScope:(bool)arg6;
- (bool)isMissingScopesFrom:(id)arg1;
- (id)originalScopes;
- (id)readableResourceTypes;
- (id)writableResourceTypes;

@end

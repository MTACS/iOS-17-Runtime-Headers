
@interface ACDKeychainItem : NSObject {
    NSMutableSet * _dirtyProperties;
    struct __CFData { } * _persistentRef;
    NSMutableDictionary * _properties;
}

@property (nonatomic, copy) NSString *accessGroup;
@property (nonatomic, copy) NSString *accessibility;
@property (nonatomic, copy) NSString *account;
@property (nonatomic, readonly) bool hasCustomAccessControl;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, readonly) struct __CFData { }*persistentRef;
@property (nonatomic, copy) NSString *service;
@property (nonatomic) bool synchronizable;
@property (nonatomic, readonly) bool useDataProtectionKeychain;
@property (nonatomic) long long version;

+ (id)new;

- (void).cxx_destruct;
- (void)_clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (id)_metadataWithError:(id*)arg1;
- (id)_modifiedProperties;
- (void)_reloadProperties;
- (bool)_setMetadata:(id)arg1 withError:(id*)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)accessGroup;
- (id)accessibility;
- (id)account;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)hasCustomAccessControl;
- (id)init;
- (id)initWithPersistentRef:(struct __CFData { }*)arg1;
- (id)initWithPersistentRef:(struct __CFData { }*)arg1 properties:(id)arg2;
- (id)metadata;
- (void)migrateToKeyBagFromLegacy;
- (struct __CFData { }*)persistentRef;
- (void)reload;
- (bool)save:(id*)arg1;
- (id)service;
- (void)setAccessGroup:(id)arg1;
- (void)setAccessibility:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSynchronizable:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (bool)synchronizable;
- (bool)useDataProtectionKeychain;
- (long long)version;

@end

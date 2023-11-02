
@interface AAFKeychainItemDescriptor : NSObject {
    NSString * _accessGroup;
    NSString * _account;
    unsigned long long  _invisible;
    unsigned long long  _itemAccessible;
    unsigned long long  _itemClass;
    NSString * _label;
    NSString * _securityDomain;
    NSString * _server;
    NSString * _service;
    unsigned long long  _synchronizable;
    unsigned long long  _sysBound;
    unsigned long long  _useDataProtection;
}

@property (nonatomic, copy) NSString *accessGroup;
@property (nonatomic, copy) NSString *account;
@property (nonatomic) unsigned long long invisible;
@property (nonatomic) unsigned long long itemAccessible;
@property (nonatomic) unsigned long long itemClass;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *securityDomain;
@property (nonatomic, copy) NSString *server;
@property (nonatomic, copy) NSString *service;
@property (nonatomic) unsigned long long synchronizable;
@property (nonatomic) unsigned long long sysBound;
@property (nonatomic) unsigned long long useDataProtection;

- (void).cxx_destruct;
- (unsigned long long)_accessibleWithKeychainAccessible:(id)arg1;
- (unsigned long long)_classWithKeychainClass:(id)arg1;
- (id)_keychainAccessibleWithAccessible:(unsigned long long)arg1;
- (id)_keychainClassWithClass:(unsigned long long)arg1;
- (id)_objectForOptionalBool:(unsigned long long)arg1;
- (unsigned long long)_optionalValueFromObject:(id)arg1;
- (id)accessGroup;
- (id)account;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAttributes:(id)arg1;
- (unsigned long long)invisible;
- (unsigned long long)itemAccessible;
- (unsigned long long)itemClass;
- (id)label;
- (id)securityDomain;
- (id)server;
- (id)service;
- (void)setAccessGroup:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setInvisible:(unsigned long long)arg1;
- (void)setItemAccessible:(unsigned long long)arg1;
- (void)setItemClass:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setSecurityDomain:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSynchronizable:(unsigned long long)arg1;
- (void)setSysBound:(unsigned long long)arg1;
- (void)setUseDataProtection:(unsigned long long)arg1;
- (unsigned long long)synchronizable;
- (unsigned long long)sysBound;
- (unsigned long long)useDataProtection;

@end

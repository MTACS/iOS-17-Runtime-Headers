
@interface COClusterConfiguration : NSObject <NSSecureCoding> {
    NSString * _globalServiceName;
    unsigned long long  _options;
    NSString * _prefix;
    COClusterRealm * _realm;
    unsigned long long  _requiredServices;
}

@property (nonatomic, readonly) NSString *globalServiceName;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *prefix;
@property (nonatomic, readonly) COClusterRealm *realm;
@property (nonatomic, readonly) unsigned long long requiredServices;

+ (id)_prefixFromDomain:(id)arg1;
+ (bool)_validateServices:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)configurationForExplicitClusterIdentifier:(id)arg1 requiredServices:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)configurationWithDomain:(id)arg1 requiredServices:(unsigned long long)arg2 options:(unsigned long long)arg3 realm:(id)arg4;
+ (id)configurationWithDomain:(id)arg1 requiredServices:(unsigned long long)arg2 options:(unsigned long long)arg3 realm:(id)arg4 globalServiceName:(id)arg5;
+ (id)domainPermittedCharacterSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPrefix:(id)arg1 requiredServices:(unsigned long long)arg2 options:(unsigned long long)arg3 realm:(id)arg4 globalServiceName:(id)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)globalServiceName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClusterConfiguration:(id)arg1;
- (unsigned long long)options;
- (id)prefix;
- (id)realm;
- (unsigned long long)requiredServices;

@end

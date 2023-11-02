
@interface PRSServerPosterIdentity : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    NSString * _descriptorIdentifier;
    bool  _isIncomingConfiguration;
    NSUUID * _posterUUID;
    NSString * _provider;
    NSString * _role;
    unsigned long long  _supplement;
    long long  _type;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *descriptorIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isIncomingConfiguration;
@property (nonatomic, readonly, copy) NSUUID *posterUUID;
@property (nonatomic, readonly, copy) NSString *provider;
@property (nonatomic, readonly) NSString *role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supplement;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned long long version;

+ (void)_setDisableUniquing:(bool)arg1;
+ (id)configurationIdentityWithProvider:(id)arg1 identifier:(id)arg2 role:(id)arg3 posterUUID:(id)arg4 version:(unsigned long long)arg5 supplement:(unsigned long long)arg6;
+ (id)debugDescription;
+ (id)descriptorIdentityWithProvider:(id)arg1 identifier:(id)arg2 role:(id)arg3 posterUUID:(id)arg4 version:(unsigned long long)arg5;
+ (id)incomingConfigurationIdentityWithProvider:(id)arg1 role:(id)arg2 posterUUID:(id)arg3 version:(unsigned long long)arg4 supplement:(unsigned long long)arg5;
+ (id)staticDescriptorIdentityWithProvider:(id)arg1 identifier:(id)arg2 role:(id)arg3 posterUUID:(id)arg4 version:(unsigned long long)arg5;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptorIdentifier;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIncomingConfiguration;
- (bool)isNewerVersionOfIdentity:(id)arg1;
- (id)posterUUID;
- (id)provider;
- (id)role;
- (unsigned long long)supplement;
- (long long)type;
- (unsigned long long)version;

@end

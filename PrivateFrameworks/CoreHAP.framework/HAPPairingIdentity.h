
@interface HAPPairingIdentity : HMFPairingIdentity {
    NSString * _controllerKeyIdentifier;
    unsigned long long  _permissions;
}

@property (nonatomic, readonly, copy) NSString *controllerKeyIdentifier;
@property (readonly, copy) NSDictionary *hmd_dictionaryEncoding;
@property (nonatomic, readonly) unsigned long long permissions;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)controllerKeyIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 controllerKeyIdentifier:(id)arg2 publicKey:(id)arg3 privateKey:(id)arg4 permissions:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4;
- (id)initWithKeychainItem:(id)arg1;
- (bool)isStrictlyEqual:(id)arg1;
- (unsigned long long)permissions;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)hmd_pairingIdentityWithDictionary:(id)arg1;

- (id)hmd_dictionaryEncoding;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)hmd_pairingIdentityWithDictionary:(id)arg1;

- (id)hmd_dictionaryEncoding;

@end

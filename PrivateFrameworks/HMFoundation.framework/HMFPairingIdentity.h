
@interface HMFPairingIdentity : HMFObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    HMFPairingKey * _privateKey;
    HMFPairingKey * _publicKey;
}

@property (getter=isControllerKey, nonatomic, readonly) bool controllerKey;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) HMFPairingKey *privateKey;
@property (nonatomic, readonly, copy) HMFPairingKey *publicKey;
@property (readonly, copy) HMFPairingIdentity *publicPairingIdentity;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)pairingIdentity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)privateKey;
- (id)publicKey;
- (id)publicPairingIdentity;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

- (bool)isControllerKey;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)initWithProtoData:(id)arg1;
- (id)pbData;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)initWithProtoData:(id)arg1;
- (id)pbData;

@end

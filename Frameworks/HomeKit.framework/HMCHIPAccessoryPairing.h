
@interface HMCHIPAccessoryPairing : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _UUID;
    HMCHIPHome * _home;
    NSNumber * _identifier;
    NSUUID * _systemCommissionerPairingUUID;
}

@property (readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) HMMTRPairing *chipPluginPairing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMCHIPHome *home;
@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (copy) NSUUID *systemCommissionerPairingUUID;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 home:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)operationalIdentity;
- (id)privateDescription;
- (void)setSystemCommissionerPairingUUID:(id)arg1;
- (id)shortDescription;
- (id)systemCommissionerPairingUUID;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)chipPluginPairing;
- (id)initWithHMMTRPairing:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)chipPluginPairing;
- (id)initWithHMMTRPairing:(id)arg1;

@end

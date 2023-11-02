
@interface CLBeaconRegion : CLRegion <HMFObject> {
    NSUUID * _UUID;
    int  _definitionMask;
    NSNumber * _major;
    NSNumber * _minor;
    bool  _notifyEntryStateOnDisplay;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly, copy) CLBeaconIdentityConstraint *beaconIdentityConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) int definitionMask;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *major;
@property (nonatomic, readonly, copy) NSNumber *minor;
@property bool notifyEntryStateOnDisplay;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly, copy) NSUUID *proximityUUID;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (id)any;
+ (bool)supportsSecureCoding;

- (id)UUID;
- (BOOL)_measuredPowerForDevice;
- (id)beaconIdentityConstraint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)definitionMask;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBeaconIdentityConstraint:(id)arg1 identifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithProximityUUID:(id)arg1 identifier:(id)arg2;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;
- (id)initWithUUID:(id)arg1 identifier:(id)arg2;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 notifyEntryStateOnDisplay:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (id)major;
- (id)minor;
- (bool)notifyEntryStateOnDisplay;
- (id)peripheralDataWithMeasuredPower:(id)arg1;
- (id)proximityUUID;
- (void)setGutsWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 notifyOnDisplay:(bool)arg4;
- (void)setNotifyEntryStateOnDisplay:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)attributeDescriptions;
- (id)description;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)attributeDescriptions;
- (id)description;

@end

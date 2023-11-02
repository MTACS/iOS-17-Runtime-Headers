
@interface HMPersonFaceCrop : HMFaceCrop <NSMutableCopying> {
    NSUUID * _personUUID;
    long long  _source;
    NSUUID * _unassociatedFaceCropUUID;
}

@property (readonly, copy) NSUUID *personUUID;
@property long long source;
@property (copy) NSUUID *unassociatedFaceCropUUID;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 personUUID:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)personUUID;
- (void)setSource:(long long)arg1;
- (void)setUnassociatedFaceCropUUID:(id)arg1;
- (long long)source;
- (id)unassociatedFaceCropUUID;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)createHMIPersonFaceCrop;
- (id)initWithHMIPersonFaceCrop:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)createHMIPersonFaceCrop;
- (id)initWithHMIPersonFaceCrop:(id)arg1;

@end

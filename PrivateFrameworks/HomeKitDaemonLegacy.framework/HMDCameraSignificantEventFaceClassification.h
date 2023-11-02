
@interface HMDCameraSignificantEventFaceClassification : HMFObject <NSCopying, NSMutableCopying> {
    NSUUID * _UUID;
    NSUUID * _personManagerUUID;
    NSString * _personName;
    NSUUID * _personUUID;
    NSUUID * _unassociatedFaceCropUUID;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSUUID *personManagerUUID;
@property (copy) NSString *personName;
@property (copy) NSUUID *personUUID;
@property (copy) NSUUID *unassociatedFaceCropUUID;

+ (id)faceClassificationWithHMIFaceClassification:(id)arg1 person:(id)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 personManagerUUID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)personManagerUUID;
- (id)personName;
- (id)personUUID;
- (void)setPersonName:(id)arg1;
- (void)setPersonUUID:(id)arg1;
- (void)setUnassociatedFaceCropUUID:(id)arg1;
- (id)unassociatedFaceCropUUID;

@end

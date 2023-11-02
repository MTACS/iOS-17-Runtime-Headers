
@interface HMDMutableCameraSignificantEventFaceClassification : HMDCameraSignificantEventFaceClassification

@property (copy) NSString *personName;
@property (copy) NSUUID *personUUID;
@property (copy) NSUUID *unassociatedFaceCropUUID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

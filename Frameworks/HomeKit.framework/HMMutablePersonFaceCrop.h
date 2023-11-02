
@interface HMMutablePersonFaceCrop : HMPersonFaceCrop

@property long long source;
@property (copy) NSUUID *unassociatedFaceCropUUID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

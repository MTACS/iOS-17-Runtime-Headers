
@interface HMMutableMediaSystemData : HMMediaSystemData

@property (copy) NSUUID *associatedGroupIdentifier;
@property (getter=isDefaultName) bool defaultName;
@property (copy) NSUUID *leftDestinationIdentifier;
@property (copy) NSString *name;
@property (copy) NSUUID *rightDestinationIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

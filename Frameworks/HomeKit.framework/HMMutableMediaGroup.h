
@interface HMMutableMediaGroup : HMMediaGroup

@property (copy) NSUUID *associatedGroupIdentifier;
@property (getter=isDefaultName) bool defaultName;
@property (copy) NSArray *destinationUniqueIdentifiers;
@property (copy) NSUUID *identifier;
@property (copy) NSString *name;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDestinationUniqueIdentifiers:(id)arg1;

@end

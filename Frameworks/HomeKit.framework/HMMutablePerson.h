
@interface HMMutablePerson : HMPerson

@property (copy) NSUUID *externalPersonUUID;
@property (copy) NSString *name;
@property (copy) NSSet *personLinks;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

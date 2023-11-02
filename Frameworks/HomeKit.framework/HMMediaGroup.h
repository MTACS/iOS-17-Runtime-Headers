
@interface HMMediaGroup : NSObject <HMEProtoBufferCoding, HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _associatedGroupIdentifier;
    bool  _defaultName;
    NSArray * _destinationUniqueIdentifiersInternal;
    NSUUID * _identifier;
    NSString * _name;
    NSUUID * _parentIdentifier;
}

@property (copy) NSUUID *associatedGroupIdentifier;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultName) bool defaultName;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *destinationIdentifiers;
@property (readonly, copy) NSArray *destinationUniqueIdentifiers;
@property (copy) NSArray *destinationUniqueIdentifiersInternal;
@property (readonly) unsigned long long hash;
@property (copy) NSUUID *identifier;
@property (copy) NSString *name;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)groupsWithProtoBufferData:(id)arg1;
+ (id)logCategory;
+ (id)protoBufferDataWithGroups:(id)arg1;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedGroupIdentifier;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationIdentifiers;
- (id)destinationUniqueIdentifiers;
- (id)destinationUniqueIdentifiersInternal;
- (id)encodeToProtoBufferData;
- (void)encodeToProtoBufferDataWithEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initClassWithProtoBufferData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 defaultName:(bool)arg4 destinationIdentifiers:(id)arg5 associatedGroupIdentifier:(id)arg6;
- (id)initWithProtoBufferData:(id)arg1;
- (bool)isDefaultName;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)mediaSystemData;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)parentIdentifier;
- (id)privateDescription;
- (void)setAssociatedGroupIdentifier:(id)arg1;
- (void)setDefaultName:(bool)arg1;
- (void)setDestinationUniqueIdentifiersInternal:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (id)shortDescription;

@end

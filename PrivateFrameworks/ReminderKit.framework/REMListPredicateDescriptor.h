
@interface REMListPredicateDescriptor : NSObject <NSSecureCoding> {
    REMObjectID * _accountID;
    NSArray * _objectIDs;
    REMObjectID * _parentListID;
    long long  _type;
}

@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, retain) NSArray *objectIDs;
@property (nonatomic, retain) REMObjectID *parentListID;
@property (nonatomic, readonly) long long type;

+ (id)predicateDescriptorForAllLists;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIDs;
- (id)parentListID;
- (void)setAccountID:(id)arg1;
- (void)setObjectIDs:(id)arg1;
- (void)setParentListID:(id)arg1;
- (long long)type;

@end

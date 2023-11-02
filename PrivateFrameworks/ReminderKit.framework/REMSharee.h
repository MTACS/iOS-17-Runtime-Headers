
@interface REMSharee : NSObject <NSCopying, NSSecureCoding, REMDAChangeTrackableModel, REMObjectIDProviding, _REMDAChangeTrackableModel> {
    long long  _accessLevel;
    REMObjectID * _accountID;
    NSString * _address;
    NSString * _displayName;
    NSString * _firstName;
    NSString * _lastName;
    REMObjectID * _listID;
    NSString * _middleName;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickname;
    REMObjectID * _objectID;
    long long  _status;
}

@property (nonatomic, readonly) long long accessLevel;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSString *address;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *externalIdentifierForMarkedForDeletionObject;
@property (nonatomic, readonly) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) REMObjectID *listID;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *namePrefix;
@property (nonatomic, readonly) NSString *nameSuffix;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) NSPersonNameComponents *personNameComponents;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

+ (id)cdEntityName;
+ (bool)isChangeTrackableModel;
+ (id)newObjectID;
+ (id)nullifiedAssignmentOriginatorID;
+ (id)objectIDWithUUID:(id)arg1;
+ (id /* block */)rem_DA_deletedKeyFromConcealedModelObjectBlock;
+ (id /* block */)rem_DA_deletedKeyFromTombstoneBlock;
+ (id /* block */)rem_DA_fetchByObjectIDBlock;
+ (id /* block */)rem_DA_fetchByObjectIDsBlock;
+ (id)rem_DA_propertiesAffectingIsConcealed;
+ (bool)rem_DA_supportsConcealedObjects;
+ (bool)rem_DA_supportsFetching;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accessLevel;
- (id)accountID;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)formattedName;
- (id)formattedNameWithStyle:(long long)arg1;
- (unsigned long long)hash;
- (id)initShareeWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 displayName:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 address:(id)arg7 status:(long long)arg8 accessLevel:(long long)arg9;
- (id)initShareeWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 displayName:(id)arg4 firstName:(id)arg5 middleName:(id)arg6 lastName:(id)arg7 namePrefix:(id)arg8 nameSuffix:(id)arg9 nickname:(id)arg10 address:(id)arg11 status:(long long)arg12 accessLevel:(long long)arg13;
- (id)initShareeWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 personNameComponents:(id)arg4 address:(id)arg5 status:(long long)arg6 accessLevel:(long long)arg7;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharee:(id)arg1;
- (id)lastName;
- (id)listID;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)objectID;
- (id)personNameComponents;
- (id)remObjectID;
- (id)shortName;
- (long long)status;

@end


@interface REMSharedToMeReminderPlaceholder : NSObject <NSCopying, NSSecureCoding, REMDAChangeTrackableModel, REMObjectIDProviding, _REMDAChangeTrackableModel> {
    REMObjectID * _accountID;
    REMObjectID * _objectID;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (readonly) Class superclass;

+ (id)cdEntityName;
+ (bool)isChangeTrackableModel;
+ (id)newObjectID;
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
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharedToMeReminderPlaceholder:(id)arg1;
- (id)objectID;
- (id)objectIdentifier;
- (id)remObjectID;

@end

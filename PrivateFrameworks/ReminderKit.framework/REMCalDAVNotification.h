
@interface REMCalDAVNotification : NSObject <NSCopying, NSSecureCoding, REMDAChangeTrackableModel, REMExternalSyncMetadataProviding, REMExternalSyncMetadataWritableProviding, REMObjectIDProviding, _REMDAChangeTrackableModel> {
    REMObjectID * _accountID;
    NSURL * _hostURL;
    REMObjectID * _listID;
    REMObjectID * _objectID;
    NSString * _uuidString;
    NSString * daPushKey;
    NSString * daSyncToken;
    NSString * externalIdentifier;
    NSString * externalModificationTag;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, copy) NSString *daPushKey;
@property (nonatomic, copy) NSString *daSyncToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, readonly) NSString *externalIdentifierForMarkedForDeletionObject;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *hostURL;
@property (nonatomic, readonly) REMObjectID *listID;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uuidString;

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
- (id)daPushKey;
- (id)daSyncToken;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)externalIdentifierForMarkedForDeletionObject;
- (id)externalModificationTag;
- (unsigned long long)hash;
- (id)hostURL;
- (id)initCalDAVNotificationWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 uuidString:(id)arg4 hostURL:(id)arg5 externalIdentifier:(id)arg6 externalModificationTag:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)listID;
- (id)objectID;
- (id)remObjectID;
- (void)setDaPushKey:(id)arg1;
- (void)setDaSyncToken:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setHostURL:(id)arg1;
- (void)setUuidString:(id)arg1;
- (bool)shouldUseExternalIdentifierAsDeletionKey;
- (id)uuidString;

@end

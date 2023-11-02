
@interface CKShare : CKRecord <CKPropertiesDescription, HMBModelObjectStorage, NSCopying, NSSecureCoding> {
    NSMutableSet * _addedParticipantIDs;
    bool  _allowsAnonymousPublicAccess;
    bool  _encodeAllowsReadOnlyParticipantsToSeeEachOther;
    NSArray * _invitedKeysToRemove;
    NSData * _invitedProtectionData;
    NSString * _invitedProtectionEtag;
    NSMutableArray * _lastFetchedParticipants;
    NSMutableArray * _mutableAllParticipants;
    long long  _participantSelfRemovalBehavior;
    long long  _participantVisibility;
    NSString * _previousInvitedProtectionEtag;
    NSString * _previousPublicProtectionEtag;
    long long  _publicPermission;
    NSData * _publicProtectionData;
    NSString * _publicProtectionEtag;
    NSMutableSet * _removedParticipantIDs;
    CKRecordID * _rootRecordID;
    bool  _serializePersonalInfo;
    CKShareID * _shareID;
}

@property (readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSMutableSet *addedParticipantIDs;
@property bool allowsAnonymousPublicAccess;
@property (nonatomic, readonly) bool br_isCloudDocsShare;
@property (readonly, copy) CKShareParticipant *currentUserParticipant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool encodeAllowsReadOnlyParticipantsToSeeEachOther;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *ic_acceptedParticipants;
@property (nonatomic, readonly) bool ic_isPublicShare;
@property (nonatomic, readonly) NSArray *ic_nonCurrentUserAcceptedParticipants;
@property (nonatomic, readonly) NSArray *ic_nonCurrentUserParticipants;
@property (nonatomic, readonly) unsigned long long ic_nonOwnerAcceptedParticipantsCount;
@property (nonatomic, readonly) unsigned long long ic_nonOwnerInvitedParticipantsCount;
@property (nonatomic, readonly) unsigned long long ic_nonOwnerPendingParticipantsCount;
@property (copy) NSArray *invitedKeysToRemove;
@property (copy) NSData *invitedProtectionData;
@property (copy) NSString *invitedProtectionEtag;
@property (readonly) bool isZoneWideShare;
@property (nonatomic, retain) NSMutableArray *lastFetchedParticipants;
@property (nonatomic, retain) NSMutableArray *mutableAllParticipants;
@property struct _OpaquePCSShareProtection { }*myParticipantPCS;
@property (readonly, copy) CKShareParticipant *owner;
@property long long participantSelfRemovalBehavior;
@property long long participantVisibility;
@property (readonly, copy) NSArray *participants;
@property (nonatomic, readonly, copy) NSString *previousInvitedProtectionEtag;
@property (copy) NSString *previousPublicProtectionEtag;
@property struct _OpaquePCSShareProtection { }*privatePCS;
@property struct _OpaquePCSShareProtection { }*publicPCS;
@property long long publicPermission;
@property (copy) NSData *publicProtectionData;
@property (copy) NSString *publicProtectionEtag;
@property (copy) NSData *publicSharingIdentity;
@property (nonatomic, readonly) NSMutableSet *removedParticipantIDs;
@property (nonatomic, readonly, copy) CKRecordID *rootRecordID;
@property bool serializePersonalInfo;
@property (nonatomic, copy) CKShareID *shareID;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (void)_addOwnerParticipant;
- (void)_addParticipantBypassingChecks:(id)arg1;
- (void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(bool)arg3 inContainer:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_commonCKShareInit;
- (id)_copyWithoutPersonalInfo;
- (void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_knownParticipantEqualToParticipant:(id)arg1;
- (bool)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2;
- (bool)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2;
- (void)_removeAllParticipants;
- (void)_removeParticipantBypassingChecks:(id)arg1;
- (void)_removePendingPrivateAndAdminParticipants;
- (void)_setPublicPermissionNoSideEffects:(long long)arg1;
- (void)_stripPersonalInfo;
- (void)addParticipant:(id)arg1;
- (id)addedParticipantIDs;
- (id)addedParticipants;
- (bool)allNonOwnerParticipantsHavePermission:(long long)arg1;
- (bool)allNonOwnerParticipantsHaveRole:(long long)arg1;
- (id)allParticipants;
- (bool)allowsAnonymousPublicAccess;
- (bool)allowsReadOnlyParticipantsToSeeEachOther;
- (bool)canHostServerURLInfo;
- (void)clearModifiedParticipants;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1 userFields:(bool)arg2;
- (id)currentUserParticipant;
- (id)description;
- (bool)encodeAllowsReadOnlyParticipantsToSeeEachOther;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (id)encryptedPublicSharingKey;
- (bool)hasEncryptedData;
- (id)init;
- (id)initInternalWithShareRecordID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordZoneID:(id)arg1;
- (id)initWithRootRecord:(id)arg1;
- (id)initWithRootRecord:(id)arg1 shareID:(id)arg2;
- (id)invitedKeysToRemove;
- (id)invitedProtectionData;
- (id)invitedProtectionEtag;
- (bool)isZoneWideShare;
- (id)lastFetchedParticipants;
- (id)mutableAllParticipants;
- (id)owner;
- (long long)participantSelfRemovalBehavior;
- (long long)participantVisibility;
- (id)participants;
- (id)previousInvitedProtectionEtag;
- (id)previousPublicProtectionEtag;
- (long long)publicPermission;
- (id)publicProtectionData;
- (id)publicProtectionEtag;
- (id)publicSharingIdentity;
- (id)redactedDescription;
- (void)registerFetchedParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (id)removedParticipantIDs;
- (id)removedParticipants;
- (void)resetFetchedParticipants;
- (id)rootRecordID;
- (bool)serializePersonalInfo;
- (void)setAllParticipants:(id)arg1;
- (void)setAllowsAnonymousPublicAccess:(bool)arg1;
- (void)setAllowsReadOnlyParticipantsToSeeEachOther:(bool)arg1;
- (void)setEncodeAllowsReadOnlyParticipantsToSeeEachOther:(bool)arg1;
- (void)setInvitedKeysToRemove:(id)arg1;
- (void)setInvitedProtectionData:(id)arg1;
- (void)setInvitedProtectionEtag:(id)arg1;
- (void)setLastFetchedParticipants:(id)arg1;
- (void)setMutableAllParticipants:(id)arg1;
- (void)setParticipantSelfRemovalBehavior:(long long)arg1;
- (void)setParticipantVisibility:(long long)arg1;
- (void)setPreviousPublicProtectionEtag:(id)arg1;
- (void)setPublicPermission:(long long)arg1;
- (void)setPublicProtectionData:(id)arg1;
- (void)setPublicProtectionEtag:(id)arg1;
- (void)setPublicSharingIdentity:(id)arg1;
- (void)setSerializePersonalInfo:(bool)arg1;
- (void)setShareID:(id)arg1;
- (void)setWantsPublicSharingKey:(bool)arg1;
- (id)shareID;
- (id)shareURL;
- (id)updateFromServerShare:(id)arg1;
- (void)updateWithSavedRecordXPCMetadata:(id)arg1 shouldOnlySaveAssetContent:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (unsigned long long)_nonOwnerInvitedParticipantsCount;
- (unsigned long long)_nonOwnerParticipantsCountWithAcceptanceStatus:(long long)arg1;
- (bool)isCloudKitShareRemovable;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (bool)br_isCloudDocsShare;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (bool)_brc_isOwner;
- (bool)deserializeSharingOptions:(unsigned long long*)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (void)_ingestAndExportPPPCSFromShareInvitationToken:(id)arg1 shareModificationDate:(id)arg2 container:(id)arg3 requestorOperationID:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_prepPCSDataUsingPreDecryptedPCSOnlyWithContainer:(id)arg1 databaseScope:(long long)arg2;
- (void)_prepPCSDataWithContainer:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(bool)arg4 containerID:(id)arg5 requestorOperationID:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)_prepPCSDataWithContainer:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(bool)arg4 containerID:(id)arg5 sharedRecordZone:(id)arg6 requestorOperationID:(id)arg7 completionHandler:(id /* block */)arg8;
- (bool)hasEncryptedPersonalInfo;
- (struct _OpaquePCSShareProtection { }*)myParticipantPCS;
- (struct _OpaquePCSShareProtection { }*)privatePCS;
- (struct _OpaquePCSShareProtection { }*)publicPCS;
- (void)setMyParticipantPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPrivatePCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setSharePCSData:(id)arg1;
- (void)setSharePCSData:(id)arg1 isUnitTestAccount:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hd_shareWithSystemData:(id)arg1 error:(id*)arg2;

- (bool)hd_isCKShare;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;

- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)ic_systemFieldsValueTransformer;

- (unsigned long long)_nonCurrentUserParticipantsCountWithAcceptanceStatus:(long long)arg1;
- (unsigned long long)_nonOwnerParticipantsCountWithAcceptanceStatus:(long long)arg1;
- (id)ic_acceptedParticipants;
- (bool)ic_isPublicShare;
- (id)ic_nonCurrentUserAcceptedParticipants;
- (id)ic_nonCurrentUserParticipants;
- (unsigned long long)ic_nonOwnerAcceptedParticipantsCount;
- (unsigned long long)ic_nonOwnerInvitedParticipantsCount;
- (unsigned long long)ic_nonOwnerPendingParticipantsCount;
- (id)ic_participantWithHandle:(id)arg1;
- (id)ic_participantWithUserRecordName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (void)ic_cacheThumbnailsForObject:(id)arg1;
+ (id)ic_fallbackThumbnail;
+ (void)ic_updateThumbnailsForObject:(id)arg1 share:(id)arg2 completion:(id /* block */)arg3;

- (void)ic_updateFromObject:(id)arg1;
- (void)ic_updateFromObject:(id)arg1 generateThumbnails:(bool)arg2;
- (void)ic_updateThumbnailsFromObject:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

- (bool)_brc_isOwner;
- (bool)deserializeSharingOptions:(unsigned long long*)arg1 error:(id*)arg2;

@end

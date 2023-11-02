
@interface CKShareMetadata : NSObject <CKContainerAssignment, CKRoughlyEquivalent, NSCopying, NSSecureCoding> {
    bool  _acceptedInProcess;
    CKShareParticipant * _callingParticipant;
    CKContainerID * _containerID;
    NSData * _encryptedData;
    CKRecordID * _hierarchicalRootRecordID;
    CKDeviceToDeviceShareInvitationToken * _invitationToken;
    NSArray * _outOfNetworkMatches;
    CKUserIdentity * _ownerIdentity;
    long long  _participantPermission;
    long long  _participantRole;
    long long  _participantStatus;
    NSData * _privateToken;
    NSData * _protectedFullToken;
    NSData * _publicToken;
    CKRecord * _rootRecord;
    NSString * _rootRecordType;
    CKShare * _share;
    NSArray * _sharedItemHierarchyIDs;
    CKRecordZone * _sharedZone;
}

@property bool acceptedInProcess;
@property (readonly) NSString *baseToken;
@property (nonatomic, copy) CKShareParticipant *callingParticipant;
@property (readonly, copy) CKContainerID *containerID;
@property (readonly, copy) NSString *containerIdentifier;
@property (copy) NSData *encryptedData;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (copy) CKRecordID *hierarchicalRootRecordID;
@property (copy) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (nonatomic, copy) NSArray *outOfNetworkMatches;
@property (copy) CKUserIdentity *ownerIdentity;
@property long long participantPermission;
@property long long participantRole;
@property long long participantStatus;
@property (readonly) long long participantType;
@property (copy) NSData *privateToken;
@property (nonatomic, copy) NSData *protectedFullToken;
@property (copy) NSData *publicToken;
@property (copy) CKRecord *rootRecord;
@property (readonly, copy) CKRecordID *rootRecordID;
@property (nonatomic, copy) NSString *rootRecordType;
@property (setter=safari_setOriginatingWindowScene:, nonatomic, retain) UIWindowScene *safari_originatingWindowScene;
@property (nonatomic, readonly) bool safari_supportsSharedTabGroups;
@property (copy) CKShare *share;
@property (nonatomic, copy) NSArray *sharedItemHierarchyIDs;
@property (nonatomic, retain) CKRecordZone *sharedZone;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (bool)acceptedInProcess;
- (id)baseToken;
- (id)callingParticipant;
- (id)ckShortDescription;
- (id)containerID;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (long long)environment;
- (id)equivalencyProperties;
- (void)fillAnonymousCKUserID:(id)arg1;
- (unsigned long long)hash;
- (id)hierarchicalRootRecordID;
- (id)init;
- (id)initInternal;
- (id)initWithCoder:(id)arg1;
- (id)initWithShare:(id)arg1 containerID:(id)arg2;
- (id)invitationToken;
- (bool)isEqual:(id)arg1;
- (id)outOfNetworkMatches;
- (id)ownerIdentity;
- (long long)participantPermission;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)participantType;
- (id)privateToken;
- (id)protectedFullToken;
- (id)publicToken;
- (id)rootRecord;
- (id)rootRecordID;
- (id)rootRecordType;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setCallingParticipant:(id)arg1;
- (void)setContainerID_modelMutation:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setHierarchicalRootRecordID:(id)arg1;
- (void)setInvitationToken:(id)arg1;
- (void)setOutOfNetworkMatches:(id)arg1;
- (void)setOwnerIdentity:(id)arg1;
- (void)setParticipantPermission:(long long)arg1;
- (void)setParticipantRole:(long long)arg1;
- (void)setParticipantStatus:(long long)arg1;
- (void)setPrivateToken:(id)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setPublicToken:(id)arg1;
- (void)setRootRecord:(id)arg1;
- (void)setRootRecordType:(id)arg1;
- (void)setShare:(id)arg1;
- (void)setSharedItemHierarchyIDs:(id)arg1;
- (void)setSharedZone:(id)arg1;
- (id)share;
- (id)sharedItemHierarchyIDs;
- (id)sharedZone;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptDataWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (void)_encryptDataWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (bool)hasEncryptedData;
- (struct _OpaquePCSShareProtection { }*)publicPCS;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection { }*)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (id)safari_originatingWindowScene;
- (void)safari_setOriginatingWindowScene:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (bool)safari_supportsSharedTabGroups;

@end

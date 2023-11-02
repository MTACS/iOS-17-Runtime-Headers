
@interface CKShareParticipant : NSObject <CKPropertiesDescription, NSCopying, NSSecureCoding> {
    long long  _acceptanceStatus;
    bool  _acceptedInProcess;
    bool  _createdInProcess;
    NSData * _encryptedPersonalInfo;
    bool  _forceSendPublicKeyForAnonymousParticipants;
    CKDeviceToDeviceShareInvitationToken * _invitationToken;
    NSString * _inviterID;
    bool  _isAnonymousInvitedParticipant;
    bool  _isCurrentUser;
    bool  _isOrgAdminUser;
    long long  _mutableInvitationTokenStatus;
    long long  _originalAcceptanceStatus;
    long long  _originalParticipantRole;
    long long  _originalPermission;
    NSString * _participantID;
    long long  _permission;
    NSData * _protectionInfo;
    NSData * _protectionInfoPublicKey;
    long long  _role;
    CKRecordID * _shareRecordID;
    CKUserIdentity * _userIdentity;
    bool  _wantsNewInvitationToken;
}

@property long long acceptanceStatus;
@property bool acceptedInProcess;
@property bool createdInProcess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSData *encryptedPersonalInfo;
@property bool forceSendPublicKeyForAnonymousParticipants;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *ic_activityStreamDisplayName;
@property (nonatomic, readonly, copy) NSString *ic_cachedDisplayNameFromContacts;
@property (nonatomic, readonly) NSString *ic_emailAddress;
@property (nonatomic, readonly, copy) NSSet *ic_mentionTokens;
@property (nonatomic, readonly, copy) NSSet *ic_mentionTokensFromContacts;
@property (nonatomic, readonly, copy) NSSet *ic_mentionableNamesFromContacts;
@property (nonatomic, readonly) NSString *ic_participantName;
@property (nonatomic, readonly) NSString *ic_phoneNumber;
@property (nonatomic, readonly) NSString *ic_shortParticipantName;
@property (copy) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (copy) NSString *inviterID;
@property bool isAnonymousInvitedParticipant;
@property bool isCurrentUser;
@property bool isOrgAdminUser;
@property long long mutableInvitationTokenStatus;
@property (nonatomic, readonly) long long originalAcceptanceStatus;
@property (nonatomic, readonly) long long originalParticipantRole;
@property (nonatomic, readonly) long long originalPermission;
@property (copy) NSString *participantID;
@property long long permission;
@property (copy) NSData *protectionInfo;
@property (copy) NSData *protectionInfoPublicKey;
@property long long role;
@property (nonatomic, readonly, copy) CNContact *safari_contact;
@property (nonatomic, readonly, copy) NSString *safari_shareParticipantIdentifier;
@property (copy) CKRecordID *shareRecordID;
@property (readonly) Class superclass;
@property long long type;
@property (copy) CKUserIdentity *userIdentity;
@property bool wantsNewInvitationToken;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)_initWithUserIdentity:(id)arg1;
- (void)_stripPersonalInfo;
- (long long)acceptanceStatus;
- (bool)acceptedInProcess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createdInProcess;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPersonalInfo;
- (bool)forceSendPublicKeyForAnonymousParticipants;
- (unsigned long long)hash;
- (id)initInternal;
- (id)initInternalWithUserIdentity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)invitationToken;
- (long long)invitationTokenStatus;
- (id)inviterID;
- (bool)isAnonymousInvitedParticipant;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (bool)isOrgAdminUser;
- (long long)mutableInvitationTokenStatus;
- (long long)originalAcceptanceStatus;
- (long long)originalParticipantRole;
- (long long)originalPermission;
- (id)participantID;
- (long long)permission;
- (id)protectionInfo;
- (id)protectionInfoPublicKey;
- (id)redactedDescription;
- (long long)role;
- (void)setAcceptanceStatus:(long long)arg1;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setCreatedInProcess:(bool)arg1;
- (void)setEncryptedPersonalInfo:(id)arg1;
- (void)setForceSendPublicKeyForAnonymousParticipants:(bool)arg1;
- (void)setInvitationToken:(id)arg1;
- (void)setInviterID:(id)arg1;
- (void)setIsAnonymousInvitedParticipant:(bool)arg1;
- (void)setIsCurrentUser:(bool)arg1;
- (void)setIsOrgAdminUser:(bool)arg1;
- (void)setMutableInvitationTokenStatus:(long long)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setPermission:(long long)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setProtectionInfoPublicKey:(id)arg1;
- (void)setRole:(long long)arg1;
- (void)setShareRecordID:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUserIdentity:(id)arg1;
- (void)setUserIdentity_modelMutation:(id)arg1;
- (void)setWantsNewInvitationToken:(bool)arg1;
- (id)shareRecordID;
- (long long)type;
- (id)unifiedContactsInStore:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)userIdentity;
- (bool)wantsNewInvitationToken;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;
- (bool)hasEncryptedPersonalInfo;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

- (bool)hmbIsEqualToParticipant:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)ic_displayableNames:(id)arg1 maximumNamesCount:(unsigned long long)arg2;
+ (unsigned long long)ic_mentionTokensPerParticipant;
+ (id)ic_mentionableNamesCache;
+ (id)ic_nonCurrentUserParticipants:(id)arg1;
+ (id)ic_participantFallbackNameForUserRecordName:(id)arg1 note:(id)arg2;
+ (id)ic_participantNameOrFallbackForUserRecordName:(id)arg1 note:(id)arg2;
+ (id)ic_participantsWithDisplayableNames:(id)arg1 maximumNamesCount:(unsigned long long)arg2;
+ (id)ic_shortParticipantNameOrFallbackForUserRecordName:(id)arg1 note:(id)arg2;

- (id)ic_activityStreamDisplayName;
- (id)ic_cachedDisplayNameFromContacts;
- (id)ic_emailAddress;
- (id)ic_mentionTokens;
- (id)ic_mentionTokensFromContacts;
- (id)ic_mentionableNamesFromContacts;
- (id)ic_participantName;
- (id)ic_participantNameMatchingString:(id)arg1 returnFullName:(bool)arg2;
- (id)ic_phoneNumber;
- (id)ic_shortParticipantName;
- (id)ic_userRecordNameInNote:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_shareParticipantIdentifier;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (id)safari_contact;

@end

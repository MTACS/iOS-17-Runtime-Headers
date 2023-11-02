
@interface CKUserIdentity : NSObject <CKPropertiesDescription, NSCopying, NSSecureCoding> {
    NSArray * _contactIdentifiers;
    NSData * _encryptedPersonalInfo;
    NSString * _firstName;
    bool  _hasiCloudAccount;
    bool  _isCached;
    NSString * _lastName;
    CKUserIdentityLookupInfo * _lookupInfo;
    NSPersonNameComponents * _nameComponents;
    NSData * _outOfNetworkPrivateKey;
    unsigned long long  _publicKeyVersion;
    NSData * _publicSharingKey;
    CKRecordID * _userRecordID;
}

@property (copy) NSArray *contactIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSData *encryptedPersonalInfo;
@property (readonly, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property bool hasiCloudAccount;
@property bool isCached;
@property (readonly, copy) NSString *lastName;
@property (copy) CKUserIdentityLookupInfo *lookupInfo;
@property (copy) NSPersonNameComponents *nameComponents;
@property (copy) NSData *outOfNetworkPrivateKey;
@property unsigned long long publicKeyVersion;
@property (copy) NSData *publicSharingKey;
@property (nonatomic, readonly, copy) NSString *safari_contactIdentifier;
@property (nonatomic, readonly, copy) NSString *safari_handle;
@property (readonly) Class superclass;
@property (copy) CKRecordID *userRecordID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)contactIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPersonalInfo;
- (id)firstName;
- (unsigned long long)hash;
- (bool)hasiCloudAccount;
- (id)initInternal;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (bool)isCached;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToUserIdentity:(id)arg1;
- (bool)isEquivalentToUserIdentityOrPublicKey:(id)arg1;
- (bool)isOutOfNetwork;
- (id)lastName;
- (id)lookupInfo;
- (id)nameComponents;
- (id)outOfNetworkPrivateKey;
- (unsigned long long)publicKeyVersion;
- (id)publicSharingKey;
- (id)redactedDescription;
- (void)setContactIdentifiers:(id)arg1;
- (void)setEncryptedPersonalInfo:(id)arg1;
- (void)setHasiCloudAccount:(bool)arg1;
- (void)setIsCached:(bool)arg1;
- (void)setLookupInfo:(id)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setOutOfNetworkPrivateKey:(id)arg1;
- (void)setPublicKeyVersion:(unsigned long long)arg1;
- (void)setPublicSharingKey:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)userRecordID;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;
- (bool)hasEncryptedPersonalInfo;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_contactIdentifier;
- (id)safari_handle;

@end

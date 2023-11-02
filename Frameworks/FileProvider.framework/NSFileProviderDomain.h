
@interface NSFileProviderDomain : NSObject <NSCopying, NSSecureCoding> {
    NSData * _backingStoreIdentity;
    bool  _containsPhotos;
    bool  _disconnected;
    unsigned long long  _disconnectionOptions;
    NSString * _disconnectionReason;
    NSString * _displayName;
    NSDictionary * _domainUserInfo;
    bool  _ejectable;
    bool  _erasable;
    NSError * _error;
    bool  _hidden;
    bool  _hiddenByUser;
    NSString * _identifier;
    bool  _isContentManaged;
    bool  _isDataSeparatedDomain;
    bool  _isEnterpriseDomain;
    NSString * _pathRelativeToDocumentStorage;
    NSString * _personaIdentifier;
    bool  _readOnly;
    bool  _replicated;
    NSString * _spotlightDomainIdentifier;
    bool  _supportsSearch;
    bool  _supportsSyncingTrash;
    NSString * _symLinkName;
    unsigned long long  _testingModes;
    bool  _userEnabled;
    NSDictionary * _userInfo;
    NSUUID * _volumeUUID;
}

@property (nonatomic, retain) NSData *backingStoreIdentity;
@property (nonatomic) bool containsPhotos;
@property (getter=isDisconnected, nonatomic) bool disconnected;
@property (getter=_disconnectionOptions, setter=_setDisconnectionOptions:, nonatomic) unsigned long long disconnectionOptions;
@property (getter=_disconnectionReason, setter=_setDisconnectionReason:, nonatomic, retain) NSString *disconnectionReason;
@property (readonly, copy) NSString *displayName;
@property (nonatomic, copy) NSDictionary *domainUserInfo;
@property (getter=isEjectable, nonatomic) bool ejectable;
@property (getter=isErasable, nonatomic) bool erasable;
@property (nonatomic, retain) NSError *error;
@property (getter=isHidden) bool hidden;
@property (getter=isHiddenByUser, nonatomic) bool hiddenByUser;
@property (readonly, copy) NSString *identifier;
@property (nonatomic) bool isContentManaged;
@property (nonatomic) bool isDataSeparatedDomain;
@property (nonatomic) bool isEnterpriseDomain;
@property (readonly, copy) NSString *pathRelativeToDocumentStorage;
@property (nonatomic, retain) NSString *personaIdentifier;
@property (nonatomic) bool readOnly;
@property (getter=isReplicated) bool replicated;
@property (nonatomic, retain) NSString *spotlightDomainIdentifier;
@property bool supportsSearch;
@property bool supportsSyncingTrash;
@property (nonatomic, copy) NSString *symLinkName;
@property unsigned long long testingModes;
@property (nonatomic) bool userEnabled;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, readonly) NSUUID *volumeUUID;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)_userInfoAllowedClasses;
+ (id)domainFromPlistDictionary:(id)arg1 identifier:(id)arg2 volumeURL:(id)arg3 replicatedByDefault:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_disconnectionOptions;
- (id)_disconnectionReason;
- (void)_setDisconnectionOptions:(unsigned long long)arg1;
- (void)_setDisconnectionReason:(id)arg1;
- (id)backingStoreIdentity;
- (bool)containsPhotos;
- (void)copyValuesFromExistingDomain:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)domainUserInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 pathRelativeToDocumentStorage:(id)arg3;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 pathRelativeToDocumentStorage:(id)arg3 hidden:(bool)arg4;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 volumeURL:(id)arg3;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 volumeURL:(id)arg3 pathRelativeToDocumentStorage:(id)arg4 hidden:(bool)arg5 replicated:(bool)arg6;
- (bool)isContentManaged;
- (bool)isDataSeparatedDomain;
- (bool)isDisconnected;
- (bool)isEjectable;
- (bool)isEnterpriseDomain;
- (bool)isErasable;
- (bool)isHidden;
- (bool)isHiddenByUser;
- (bool)isReplicated;
- (id)pathRelativeToDocumentStorage;
- (id)personaIdentifier;
- (id)plistDictionary;
- (bool)readOnly;
- (void)setBackingStoreIdentity:(id)arg1;
- (void)setContainsPhotos:(bool)arg1;
- (void)setDisconnected:(bool)arg1;
- (void)setDomainUserInfo:(id)arg1;
- (void)setEjectable:(bool)arg1;
- (void)setErasable:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHiddenByUser:(bool)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setIsDataSeparatedDomain:(bool)arg1;
- (void)setIsEnterpriseDomain:(bool)arg1;
- (void)setPersonaIdentifier:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setReplicated:(bool)arg1;
- (void)setSpotlightDomainIdentifier:(id)arg1;
- (void)setSupportsSearch:(bool)arg1;
- (void)setSupportsSyncingTrash:(bool)arg1;
- (void)setSymLinkName:(id)arg1;
- (void)setTestingModes:(unsigned long long)arg1;
- (void)setUserEnabled:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (id)spotlightDomainIdentifier;
- (bool)supportsSearch;
- (bool)supportsSyncingTrash;
- (id)symLinkName;
- (unsigned long long)testingModes;
- (bool)userEnabled;
- (id)userInfo;
- (id)volumeUUID;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (bool)br_isCiconiaDomain;

@end

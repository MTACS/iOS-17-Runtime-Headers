
@interface ICLPlaceholderRecord : ICLBundleRecord <NSCopying, NSSecureCoding> {
    NSString * _alternateIconName;
    NSString * _appManagementDomain;
    NSURL * _bundleContainerURL;
    NSDate * _installDate;
    NSData * _installSessionID;
    bool  _isBeta;
    bool  _isDeletable;
    bool  _isOnDemandInstallCapable;
    bool  _isSwiftPlaygroundsApp;
    bool  _isWebNotificationBundle;
    NSString * _linkedParentBundleID;
    NSNumber * _lsInstallType;
    NSArray * _parentIdentifiers;
    unsigned long long  _placeholderFailureReason;
    ICLSinfInfo * _sinfInfo;
    NSData * _uniqueInstallID;
}

@property (nonatomic, copy) NSString *alternateIconName;
@property (nonatomic, copy) NSString *appManagementDomain;
@property (nonatomic, copy) NSURL *bundleContainerURL;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic, copy) NSData *installSessionID;
@property (nonatomic) bool isBeta;
@property (nonatomic) bool isDeletable;
@property (nonatomic) bool isOnDemandInstallCapable;
@property (nonatomic) bool isSwiftPlaygroundsApp;
@property (nonatomic) bool isWebNotificationBundle;
@property (nonatomic, copy) NSString *linkedParentBundleID;
@property (nonatomic, copy) NSNumber *lsInstallType;
@property (nonatomic, copy) NSArray *parentIdentifiers;
@property (nonatomic) unsigned long long placeholderFailureReason;
@property (nonatomic, copy) ICLSinfInfo *sinfInfo;
@property (nonatomic, copy) NSData *uniqueInstallID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternateIconName;
- (id)appManagementDomain;
- (id)bundleContainerURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyRecordDictionary:(id)arg1;
- (id)installDate;
- (id)installSessionID;
- (bool)isBeta;
- (bool)isDeletable;
- (bool)isEqual:(id)arg1;
- (bool)isOnDemandInstallCapable;
- (bool)isSwiftPlaygroundsApp;
- (bool)isWebNotificationBundle;
- (id)legacyRecordDictionary;
- (id)linkedParentBundleID;
- (id)lsInstallType;
- (id)parentIdentifiers;
- (unsigned long long)placeholderFailureReason;
- (void)setAlternateIconName:(id)arg1;
- (void)setAppManagementDomain:(id)arg1;
- (void)setBundleContainerURL:(id)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setInstallSessionID:(id)arg1;
- (void)setIsBeta:(bool)arg1;
- (void)setIsDeletable:(bool)arg1;
- (void)setIsOnDemandInstallCapable:(bool)arg1;
- (void)setIsSwiftPlaygroundsApp:(bool)arg1;
- (void)setIsWebNotificationBundle:(bool)arg1;
- (void)setLinkedParentBundleID:(id)arg1;
- (void)setLsInstallType:(id)arg1;
- (void)setParentIdentifiers:(id)arg1;
- (void)setPlaceholderFailureReason:(unsigned long long)arg1;
- (void)setSinfInfo:(id)arg1;
- (void)setUniqueInstallID:(id)arg1;
- (id)sinfInfo;
- (id)uniqueInstallID;

@end

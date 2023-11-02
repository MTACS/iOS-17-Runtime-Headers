
@interface MIBundleMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _alternateIconName;
    unsigned long long  _autoInstallOverride;
    NSString * _installBuildVersion;
    NSDate * _installDate;
    unsigned long long  _installType;
    NSSet * _linkedChildBundleIDs;
    NSString * _linkedParentBundleID;
    unsigned long long  _placeholderFailureReason;
    NSError * _placeholderFailureUnderlyingError;
    unsigned long long  _placeholderFailureUnderlyingErrorSource;
    NSString * _watchKitAppExecutableHash;
}

@property (nonatomic, copy) NSString *alternateIconName;
@property (nonatomic) unsigned long long autoInstallOverride;
@property (nonatomic, copy) NSString *installBuildVersion;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic) unsigned long long installType;
@property (nonatomic, copy) NSSet *linkedChildBundleIDs;
@property (nonatomic, copy) NSString *linkedParentBundleID;
@property (nonatomic) unsigned long long placeholderFailureReason;
@property (nonatomic, retain) NSError *placeholderFailureUnderlyingError;
@property (nonatomic) unsigned long long placeholderFailureUnderlyingErrorSource;
@property (nonatomic, copy) NSString *watchKitAppExecutableHash;

+ (id)metadataFromURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternateIconName;
- (unsigned long long)autoInstallOverride;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)installBuildVersion;
- (id)installDate;
- (unsigned long long)installType;
- (bool)isEqual:(id)arg1;
- (id)linkedChildBundleIDs;
- (id)linkedParentBundleID;
- (unsigned long long)placeholderFailureReason;
- (id)placeholderFailureUnderlyingError;
- (unsigned long long)placeholderFailureUnderlyingErrorSource;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (void)setAlternateIconName:(id)arg1;
- (void)setAutoInstallOverride:(unsigned long long)arg1;
- (void)setInstallBuildVersion:(id)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setInstallType:(unsigned long long)arg1;
- (void)setLinkedChildBundleIDs:(id)arg1;
- (void)setLinkedParentBundleID:(id)arg1;
- (void)setPlaceholderFailureReason:(unsigned long long)arg1;
- (void)setPlaceholderFailureUnderlyingError:(id)arg1;
- (void)setPlaceholderFailureUnderlyingErrorSource:(unsigned long long)arg1;
- (void)setWatchKitAppExecutableHash:(id)arg1;
- (id)watchKitAppExecutableHash;

@end

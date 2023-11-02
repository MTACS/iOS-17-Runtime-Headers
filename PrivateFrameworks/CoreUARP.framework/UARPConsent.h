
@interface UARPConsent : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accessoryName;
    NSString * _assetBuildVersion;
    NSString * _assetVersion;
    NSString * _consentDescription;
    NSNumber * _downloadSize;
    NSNumber * _installerOverallProgress;
    NSString * _installerProgressDescription;
    NSError * _installerProgressError;
    NSString * _installerProgressPhase;
    bool  _isDownloadable;
    bool  _isRecommended;
    bool  _needsPostLogoutMode;
    NSString * _warning;
}

@property (readonly) NSString *accessoryName;
@property (copy) NSString *assetBuildVersion;
@property (readonly) NSString *assetVersion;
@property (copy) NSString *consentDescription;
@property NSNumber *downloadSize;
@property (retain) NSNumber *installerOverallProgress;
@property (copy) NSString *installerProgressDescription;
@property (retain) NSError *installerProgressError;
@property (copy) NSString *installerProgressPhase;
@property bool isDownloadable;
@property bool isRecommended;
@property bool needsPostLogoutMode;
@property (copy) NSString *warning;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)assetBuildVersion;
- (id)assetVersion;
- (id)consentDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadSize;
- (void)dumpWithTabDepth:(unsigned long long)arg1 dumpString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryName:(id)arg1 assetVersion:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)installerOverallProgress;
- (id)installerProgressDescription;
- (id)installerProgressError;
- (id)installerProgressPhase;
- (bool)isDownloadable;
- (bool)isRecommended;
- (bool)needsPostLogoutMode;
- (void)setAssetBuildVersion:(id)arg1;
- (void)setConsentDescription:(id)arg1;
- (void)setDownloadSize:(id)arg1;
- (void)setInstallerOverallProgress:(id)arg1;
- (void)setInstallerProgressDescription:(id)arg1;
- (void)setInstallerProgressError:(id)arg1;
- (void)setInstallerProgressPhase:(id)arg1;
- (void)setIsDownloadable:(bool)arg1;
- (void)setIsRecommended:(bool)arg1;
- (void)setNeedsPostLogoutMode:(bool)arg1;
- (void)setWarning:(id)arg1;
- (id)warning;

@end

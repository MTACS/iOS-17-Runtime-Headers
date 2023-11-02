
@interface CPSSessionConfiguration : NSObject <NSSecureCoding> {
    NSString * _fallbackClipBundleID;
    bool  _isForSwitcherOverlay;
    NSString * _launchReason;
    bool  _originIsControlCenter;
    NSString * _referrerBundleID;
    NSUUID * _sessionID;
    NSString * _sourceBundleID;
    bool  _useLocalContent;
    bool  _usedByPPT;
}

@property (nonatomic, readonly) NSString *analyticsLaunchReason;
@property (nonatomic, readonly) NSString *analyticsReferrerBundleID;
@property (nonatomic, readonly) bool analyticsShouldIncludeReferrerURL;
@property (nonatomic, readonly) bool canPrefetchEncryptionKey;
@property (nonatomic, copy) NSString *fallbackClipBundleID;
@property (getter=isInvokedByPhysicalCode, nonatomic, readonly) bool invokedByPhysicalCode;
@property (nonatomic) bool isForSwitcherOverlay;
@property (nonatomic, copy) NSString *launchReason;
@property (nonatomic, readonly) bool mayLaunchWithoutInvocationUI;
@property (nonatomic) bool originIsControlCenter;
@property (nonatomic, copy) NSString *referrerBundleID;
@property (nonatomic, retain) NSUUID *sessionID;
@property (nonatomic, retain) NSString *sourceBundleID;
@property (nonatomic) bool useLocalContent;
@property (nonatomic) bool usedByPPT;

+ (id)_defaultSourceBundleIDToReasonMap;
+ (id)localConfiguration;
+ (id)pptConfiguration;
+ (id)pptLocalConfiguration;
+ (id)reasonForSourceBundleID:(id)arg1;
+ (id)standardConfiguration;
+ (id)standardConfigurationWithFallbackClipBundleID:(id)arg1;
+ (id)standardConfigurationWithURL:(id)arg1 fallbackBundleID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsLaunchReason;
- (id)analyticsReferrerBundleID;
- (bool)analyticsShouldIncludeReferrerURL;
- (bool)canPrefetchEncryptionKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackClipBundleID;
- (id)initWithCoder:(id)arg1;
- (bool)isForSwitcherOverlay;
- (bool)isInvokedByPhysicalCode;
- (id)launchReason;
- (bool)mayLaunchWithoutInvocationUI;
- (bool)originIsControlCenter;
- (id)referrerBundleID;
- (id)sessionID;
- (void)setFallbackClipBundleID:(id)arg1;
- (void)setIsForSwitcherOverlay:(bool)arg1;
- (void)setLaunchReason:(id)arg1;
- (void)setOriginIsControlCenter:(bool)arg1;
- (void)setReferrerBundleID:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSourceBundleID:(id)arg1;
- (void)setUseLocalContent:(bool)arg1;
- (void)setUsedByPPT:(bool)arg1;
- (id)sourceBundleID;
- (bool)useLocalContent;
- (bool)usedByPPT;

@end

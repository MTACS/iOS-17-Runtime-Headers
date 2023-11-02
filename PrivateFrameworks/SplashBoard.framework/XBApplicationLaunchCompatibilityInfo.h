
@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSSecureCoding> {
    long long  _badLaunchImageCandidateCount;
    NSString * _bundleContainerPath;
    NSString * _bundleIdentifier;
    NSString * _bundlePath;
    NSString * _defaultGroupIdentifier;
    XBLaunchInterface * _defaultInterface;
    bool  _hasKnownBadLaunchImage;
    NSArray * _launchInterfaces;
    bool  _launchesOpaque;
    NSString * _sandboxPath;
}

@property (nonatomic, readonly) bool allowsSavingLaunchImages;
@property (nonatomic) long long badLaunchImageCandidateCount;
@property (nonatomic, copy) NSString *bundleContainerPath;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundlePath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultGroupIdentifier;
@property (nonatomic, readonly, copy) XBLaunchInterface *defaultLaunchInterface;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasKnownBadLaunchImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *launchInterfaces;
@property (nonatomic) bool launchesOpaque;
@property (nonatomic, copy) NSString *sandboxPath;
@property (readonly) Class superclass;

+ (id)compatibilityInfoForAppInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setLaunchInterfaces:(id)arg1;
- (bool)allowsSavingLaunchImages;
- (long long)badLaunchImageCandidateCount;
- (id)bundleContainerPath;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)defaultGroupIdentifier;
- (id)defaultLaunchInterface;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)hasKnownBadLaunchImage;
- (id)initWithBundle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)launchInterfaceExistsForScheme:(id)arg1;
- (id)launchInterfaceIdentifierForRequest:(id)arg1;
- (id)launchInterfaceWithIdentifier:(id)arg1;
- (id)launchInterfaces;
- (bool)launchesOpaque;
- (id)sandboxPath;
- (void)setBadLaunchImageCandidateCount:(long long)arg1;
- (void)setBundleContainerPath:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setDefaultGroupIdentifier:(id)arg1;
- (void)setHasKnownBadLaunchImage:(bool)arg1;
- (void)setLaunchesOpaque:(bool)arg1;
- (void)setSandboxPath:(id)arg1;

@end

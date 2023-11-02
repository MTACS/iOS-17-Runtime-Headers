
@interface WBSExtensionTelemetryData : NSObject {
    bool  _allWebsitesPermissionLevel;
    bool  _canOverrideNewTabPage;
    bool  _enabled;
    NSString * _identifier;
    long long  _manifestVersion;
    unsigned long long  _websitesDeniedAccessCount;
    unsigned long long  _websitesGrantedAccessCount;
}

@property (nonatomic) bool allWebsitesPermissionLevel;
@property (nonatomic) bool canOverrideNewTabPage;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long manifestVersion;
@property (nonatomic) unsigned long long websitesDeniedAccessCount;
@property (nonatomic) unsigned long long websitesGrantedAccessCount;

- (void).cxx_destruct;
- (bool)allWebsitesPermissionLevel;
- (bool)canOverrideNewTabPage;
- (bool)enabled;
- (id)identifier;
- (long long)manifestVersion;
- (void)setAllWebsitesPermissionLevel:(bool)arg1;
- (void)setCanOverrideNewTabPage:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setManifestVersion:(long long)arg1;
- (void)setWebsitesDeniedAccessCount:(unsigned long long)arg1;
- (void)setWebsitesGrantedAccessCount:(unsigned long long)arg1;
- (unsigned long long)websitesDeniedAccessCount;
- (unsigned long long)websitesGrantedAccessCount;

@end

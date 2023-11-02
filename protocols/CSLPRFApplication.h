
@protocol CSLPRFApplication <NSObject>

@required

- (NSString *)SDKVersion;
- (NSURL *)URL;
- (LSApplicationRecord *)applicationRecord;
- (BBSectionInfo *)bbSectionInfo;
- (NSString *)bundleIdentifier;
- (long long)compare:(id <CSLPRFApplication>)arg1;
- (NSArray *)counterpartIdentifiers;
- (bool)defaultsToPrivateAlwaysOnDisplayTreatment;
- (bool)isBBSourcedApplication;
- (bool)isLocal;
- (bool)isRemovedSystemApp;
- (NSString *)localizedName;
- (bool)supportsAlwaysOnDisplay;

@end

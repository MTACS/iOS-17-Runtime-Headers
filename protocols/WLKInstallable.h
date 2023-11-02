
@protocol WLKInstallable <NSObject>

@required

- (NSArray *)appAdamIDs;
- (NSArray *)appBundleIDs;
- (NSURL *)appIconURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (NSURL *)appStoreURL;
- (NSString *)name;
- (NSString *)title;

@optional

- (bool)forceDSIDlessInstall;

@end

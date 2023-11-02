
@interface MCSingleAppPayload : MCAppWhitelistPayloadBase {
    bool  _allowLogout;
}

@property (nonatomic, readonly) bool allowLogout;
@property (nonatomic, readonly) NSString *applicationBundleID;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (bool)allowLogout;
- (id)applicationBundleID;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)mustInstallNonInteractively;
- (id)restrictions;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end


@interface IFBundle : NSObject {
    struct __CFBundle { } * _bundle;
    bool  _coreTypes;
}

@property (readonly, copy) NSURL *assetCatalogURL;
@property struct __CFBundle { }*bundle;
@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSURL *bundleURL;
@property (getter=isCoreTypes, readonly) bool coreTypes;
@property (readonly, copy) NSDictionary *iconDictionary;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly) unsigned long long platform;

+ (id)appIconOverrideBundle;
+ (id)bundleWithURL:(id)arg1;
+ (id)coreGlyphsBundle;
+ (id)coreGlyphsPrivateBundle;
+ (id)coreTypesBundle;
+ (id)frameworkBundle;
+ (id)frameworkLocalizedString:(id)arg1;
+ (id)iconFoundationFrameworkBundle;
+ (id)iconsetResourceAssetsCatalogURL;
+ (id)iconsetResourceBundle;
+ (id)mainBundle;
+ (id)mobileIconsFrameworkBundle;

- (id)URLForResource:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)assetCatalogURL;
- (struct __CFBundle { }*)bundle;
- (id)bundleID;
- (id)bundleURL;
- (void)dealloc;
- (id)iconDictionary;
- (id)infoDictionary;
- (id)initWithCFBundle:(struct __CFBundle { }*)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isCoreTypes;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (unsigned long long)platform;
- (void)setBundle:(struct __CFBundle { }*)arg1;

@end

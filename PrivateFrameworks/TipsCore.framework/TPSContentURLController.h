
@interface TPSContentURLController : NSObject

+ (id)_boardID;
+ (id)_boardIDOrProductHash;
+ (id)_platformString;
+ (id)_productHash;
+ (id)_uiTestLocalBaseURL;
+ (id)_uiTestLocalURLForIdentifier:(id)arg1;
+ (id)assetPathFromAssetConfiguration:(id)arg1 type:(long long)arg2;
+ (id)contentRequestURLWithContentMapHash:(id)arg1;
+ (id)contentRequestURLWithContentMapHash:(id)arg1 variantIdentifiers:(id)arg2 useLanguageDefault:(bool)arg3;
+ (id)defaultHost;
+ (id)defaultHostPath;
+ (id)effectiveHost;
+ (id)languageStringWithLanguageDefault:(bool)arg1 count:(unsigned long long)arg2;
+ (long long)majorVersionForVersionString:(id)arg1;
+ (id)metaRequestURL;
+ (id)modelQueryItem;
+ (id)platformQueryItem;
+ (id)preferredLocalizations;
+ (id)preferredLocalizationsWithCount:(unsigned long long)arg1;
+ (id)requestURLForAPI:(id)arg1 additionalQueryItems:(id)arg2 useLanguageDefault:(bool)arg3 apiVersion:(id)arg4;
+ (id)userGuideURLForIdentifier:(id)arg1 version:(id)arg2 platformIndependent:(bool)arg3 subPath:(id)arg4;

@end

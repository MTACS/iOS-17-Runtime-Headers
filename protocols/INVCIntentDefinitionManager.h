
@protocol INVCIntentDefinitionManager <NSObject>

@required

+ (NSArray *)allBundleIdentifiers;
+ (INAppInfo *)appInfoForBundleID:(NSString *)arg1;
+ (NSURL *)intentDefinitionBundleURLForBundleID:(NSString *)arg1;
+ (NSArray *)intentDefinitionURLsForBundleID:(NSString *)arg1;

@end

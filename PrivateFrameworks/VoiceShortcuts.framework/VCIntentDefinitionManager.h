
@interface VCIntentDefinitionManager : NSObject <INVCIntentDefinitionManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allBundleIdentifiers;
+ (id)appInfoForBundleID:(id)arg1;
+ (id)intentDefinitionBundleURLForBundleID:(id)arg1;
+ (id)intentDefinitionURLsForBundleID:(id)arg1;
+ (id)intentDefinitionURLsForBundleID:(id)arg1 inDirectory:(id)arg2;

@end

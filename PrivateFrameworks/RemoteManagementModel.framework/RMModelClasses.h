
@interface RMModelClasses : NSObject

+ (id)allActivationClasses;
+ (id)allAssetClasses;
+ (id)allConfigurationClasses;
+ (id)allManagementClasses;
+ (id)allStatusItemClasses;
+ (Class)classForCommandType:(id)arg1;
+ (Class)classForDeclarationType:(id)arg1;
+ (Class)classForStatusItemType:(id)arg1;
+ (void)hideDeclarationsWithTypes:(id)arg1;

@end

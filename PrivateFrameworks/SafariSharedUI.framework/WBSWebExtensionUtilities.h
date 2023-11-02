
@interface WBSWebExtensionUtilities : NSObject

+ (id)changeInfoForOnUpdatedEventRespectingPermissionsForTab:(id)arg1 changedProperties:(unsigned long long)arg2 webExtension:(id)arg3;
+ (bool)isProfileServerIDForDefaultProfile:(id)arg1;
+ (bool)isTabIDValid:(double)arg1;
+ (bool)isWindowIDValid:(double)arg1;
+ (double)nextTabID;
+ (double)nextWindowID;
+ (id)serializeObjectToJSON:(id)arg1;
+ (double)storageSizeForKeyOrValue:(id)arg1;
+ (double)storageSizeForKeysAndValues:(id)arg1;
+ (bool)tab:(id)arg1 matchesQueryInfo:(id)arg2 idOfCurrentWindow:(double)arg3 webExtension:(id)arg4;
+ (id)tabIDToTabPositionDictionaryForTabs:(id)arg1;
+ (id)tabStateRespectingPermissionsForTab:(id)arg1 webExtension:(id)arg2;
+ (id)urlFromTabsCreateOrUpdatePropertiesDictionary:(id)arg1 webExtension:(id)arg2;
+ (bool)validateContentsOfDictionary:(id)arg1 requiredKeys:(id)arg2 optionalKeys:(id)arg3 keyToExpectedValueType:(id)arg4 outExceptionString:(id*)arg5;
+ (id)windowStateForWindow:(id)arg1 webExtension:(id)arg2 shouldPopulateTabs:(bool)arg3;

@end

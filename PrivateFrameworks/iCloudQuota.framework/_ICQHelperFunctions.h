
@interface _ICQHelperFunctions : NSObject

+ (bool)_checkOptions:(id)arg1 forKey:(id)arg2;
+ (id)_darwinNotificationNameForRequestType:(long long)arg1;
+ (id)_getOfferDescriptionFromRequestType:(long long)arg1;
+ (long long)_getOfferRequestTypeFromOptions:(id)arg1 bundleId:(id)arg2 isBuddy:(bool)arg3;
+ (long long)_offerRequestTypeForStub:(id)arg1;
+ (id)_remoteBackupSizeOperationQueue;
+ (bool)_requestedDefaultOfferInOptions:(id)arg1;
+ (bool)_requestedFetchOffersInOptions:(id)arg1;
+ (bool)_requestedPremiumOfferInOptions:(id)arg1;
+ (id)base64EncodeString:(id)arg1;
+ (bool)defaultKeyExists:(id)arg1;
+ (id)defaultStringValueForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)dictionaryForKey:(id)arg1 from:(id)arg2;
+ (id)findPlaceholdersInString:(id)arg1;
+ (id)followUpGroupIdentifierForString:(id)arg1;
+ (void)getOriginalPhotosSizeWithCompletion:(id /* block */)arg1;
+ (void)getPhotosLibrarySizeWithCompletion:(id /* block */)arg1;
+ (id)getStringFromNumber:(id)arg1;
+ (bool)isBackupEnabledForAccount:(id)arg1 accountStore:(id)arg2;
+ (bool)isICPLEnabledForAccount:(id)arg1;
+ (bool)isPhotosLibraryIncludedInBackupForAccount:(id)arg1;
+ (bool)isServerMockingEnabled;
+ (id)numberForKey:(id)arg1 from:(id)arg2;
+ (id)parseTemplates:(id)arg1;
+ (void)remoteBackupSizeForAccount:(id)arg1 timeoutInSeconds:(double)arg2 completion:(id /* block */)arg3;
+ (id)replaceWordsIn:(id)arg1 with:(id)arg2;
+ (void)setUserDefaultsBool:(bool)arg1 forKey:(id)arg2;
+ (void)setUserDefaultsObject:(id)arg1 forKey:(id)arg2;
+ (id)stringFromTemplates:(id)arg1 key:(id)arg2;
+ (id)usedCapacityForVolume:(id)arg1;
+ (bool)userDefaultsBoolValueForKey:(id)arg1;
+ (id)userDefaultsDictionaryForKey:(id)arg1;
+ (id)userDefaultsObjectForKey:(id)arg1;
+ (id)userDefaultsStringForKey:(id)arg1;

@end

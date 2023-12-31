
@interface CNDonatedContactSanitizer : NSObject

+ (void)markContactAndMultiValuesAsDonated:(id)arg1 usingStoreInfo:(id)arg2 andStoreIdentifier:(id)arg3;
+ (id)mutableCopyOfDonatedContact:(id)arg1 withCustomIdentifier:(id)arg2;
+ (id)sanitizeDonatedContact:(id)arg1 matchingPredicate:(id)arg2;
+ (id)storeInfoByMergingStoreInfos:(id)arg1;
+ (id)storeInfoFromPredicate:(id)arg1;

@end


@interface QLUTIManager : NSObject

+ (id)_preferredParentUTIof:(id)arg1 fromParents:(id)arg2;
+ (id)_recursiveValueInDictionary:(id)arg1 forType:(id)arg2 alreadySeenUTIs:(id)arg3 matchedValueToTypeBlock:(id /* block */)arg4 validationBlock:(id /* block */)arg5;
+ (id)_searchParentTypesFor:(id)arg1 fromDictionary:(id)arg2 alreadySeenUTIs:(id)arg3 matchedValueToTypeBlock:(id /* block */)arg4 validationBlock:(id /* block */)arg5;
+ (id)_selectParentUTIForUTI:(id)arg1 fromParentUTIs:(id)arg2 dictionary:(id)arg3 alreadySeenUTIs:(id)arg4 matchedValueToTypeBlock:(id /* block */)arg5 validationBlock:(id /* block */)arg6;
+ (id)claimedAVTypes;
+ (id)claimedCSVTypes;
+ (id)claimedCalendarTypes;
+ (id)claimedContactTypes;
+ (id)claimedImageTypes;
+ (id)claimedLivePhotoTypes;
+ (id)claimedOfficeTypes;
+ (id)claimedPDFTypes;
+ (id)claimedTextTypes;
+ (id)claimedWebViewTypes;
+ (id)claimediWorkTypes;
+ (id)findAndStoreValueInTypeKeyedDictionary:(id)arg1 forType:(id)arg2 withDescription:(id)arg3 withQueue:(id)arg4 validationBlock:(id /* block */)arg5;
+ (id)internallyClaimedTypes;
+ (id)screentimeiWorkBundleForUTI:(id)arg1;
+ (id)textGeneratorSupportedTypes;
+ (id)typesForWhichExternalGeneratorsArePreferred;
+ (id)valueInTypeKeyedDictionary:(id)arg1 forType:(id)arg2;

@end

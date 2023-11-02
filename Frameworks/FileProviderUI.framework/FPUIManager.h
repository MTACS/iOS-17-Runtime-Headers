
@interface FPUIManager : NSObject

+ (id)actionsForProviderDomain:(id)arg1;
+ (id)authenticationActionForProviderDomain:(id)arg1;
+ (id)createFPUIActionWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 fileProviderIdentifier:(id)arg3 displayName:(id)arg4 predicate:(id)arg5 displayInline:(bool)arg6 isNonUIAction:(bool)arg7 fpProviderDomain:(id)arg8;
+ (id)extensionMatchingDictionaryForItems:(id)arg1 fpProviderDomain:(id)arg2;
+ (void)getExtensionRecordsForUseCase:(unsigned long long)arg1 uiExtensionRecord:(id*)arg2 nonUIExtensionRecord:(id*)arg3 forProviderDomain:(id)arg4;
+ (bool)isAction:(id)arg1 eligibleForItems:(id)arg2;
+ (id)uiActionsForProviderDomain:(id)arg1;

@end

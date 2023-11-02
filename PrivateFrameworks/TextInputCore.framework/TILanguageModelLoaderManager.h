
@interface TILanguageModelLoaderManager : NSObject

+ (void)clearDynamicLearningCaches;
+ (void)clearDynamicResourcesAtPath:(id)arg1;
+ (void)contactStoreDidChange:(id)arg1;
+ (void)dropResourcesExcludingInputModes:(id)arg1;
+ (void)flushDynamicLearningCaches;
+ (void)flushDynamicResourcesForInputModes:(id)arg1;
+ (id)knownClients;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })modelForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4 isMultiLingualModeEnabled:(bool)arg5 validEnglishTransformerMultilingualConfig:(bool)arg6 trialParameters:(id)arg7 inlineCompletionPrecision:(int)arg8;
+ (void)performMaintenance;
+ (id)recipientRecords;
+ (void)resetClientAndRecipientCache;
+ (void)setAsynchronousLoad:(bool)arg1;
+ (void)setOfflineTrainingEnabled:(bool)arg1;
+ (id)sharedLanguageModelLoaderForInputMode:(id)arg1 customResourcePaths:(id)arg2 dynamicResourcePath:(id)arg3 mobileAssets:(id)arg4 usesLinguisticContext:(bool)arg5 isMultiLingualModeEnabled:(bool)arg6 validEnglishTransformerMultilingualConfig:(bool)arg7 trialParameters:(id)arg8;
+ (void)startObservingContactStore;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })stubForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4 isMultiLingualModeEnabled:(bool)arg5;
+ (void)unwireAllLanguageModelMemory;
+ (void)wireAllLanguageModelMemory;

@end

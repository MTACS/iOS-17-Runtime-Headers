
@interface _INVocabularyValidator : NSObject

+ (void)initialize;

- (bool)_bundleID:(id)arg1 isWhitelistedForVocabularyType:(long long)arg2;
- (void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg1 handlingIntents:(id)arg2 completion:(id /* block */)arg3;
- (void)_determineIfBundleID:(id)arg1 appPath:(id)arg2 canProvideVocabularyOfType:(long long)arg3 completion:(id /* block */)arg4;
- (id)_intentsUsingVocabularyType:(long long)arg1;
- (id)_pathToAppWithBundleID:(id)arg1;
- (id)_validatedItemsFromVocabularyObject:(id)arg1 ofType:(long long)arg2 loggingWarnings:(bool)arg3 withItemFactory:(id /* block */)arg4;
- (void)determineIfBundleID:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(id /* block */)arg3;
- (unsigned long long)maximumNumberOfVocabularyStringsForType:(long long)arg1;
- (id)validatedItemsFromVocabularySpeakables:(id)arg1 ofType:(long long)arg2 loggingWarnings:(bool)arg3;
- (id)validatedItemsFromVocabularyStrings:(id)arg1 ofType:(long long)arg2 loggingWarnings:(bool)arg3;

@end

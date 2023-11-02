
@interface AXMLanguageTranslator : NSObject {
    NSArray * _cachedAvailableTranslationLocales;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _LTTranslator * _translator;
}

@property (nonatomic, retain) _LTTranslator *translator;

+ (id)allowedTargetLocalesForTranslation;

- (void).cxx_destruct;
- (id)_canonicalLocaleForLocale:(id)arg1;
- (id)_canonicalLocalesForLocales:(id)arg1;
- (id)_descriptionForLocales:(id)arg1;
- (id)_filteredLocalesToInstallFromAvailableLocales:(id)arg1 requestedLocales:(id)arg2 fallBackToBaseLanguageIfNeeded:(bool)arg3;
- (id)_localeIdentifiersForLocales:(id)arg1;
- (id)_proposedTranslationLocaleForLocale:(id)arg1;
- (void)availableTranslationLocales:(id /* block */)arg1;
- (id)init;
- (void)installOfflineTranslationModelForLanguageCodeIfNeeded:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)installOfflineTranslationModelForLocales:(id)arg1 fallBackToBaseLanguageIfNeeded:(bool)arg2 forceReinstall:(bool)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)installedTranslationLocales:(id /* block */)arg1;
- (void)setTranslator:(id)arg1;
- (void)translateText:(id)arg1 toLocale:(id)arg2 respectAllowList:(bool)arg3 completion:(id /* block */)arg4;
- (id)translateText:(id)arg1 toLocale:(id)arg2 respectAllowList:(bool)arg3 metrics:(id)arg4 error:(id*)arg5;
- (id)translator;
- (void)userSelectableTranslationLocales:(id /* block */)arg1;

@end


@interface SCROBrailleSubstitutionManager : NSObject {
    NSLinguisticTagger * _linguisticTagger;
    NSMutableDictionary * _lookup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _taggerLock;
}

+ (id)_bundleForStrings;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_ensureLanguageDataPresent:(id)arg1;
- (void)_loadLanguageSubstitutions:(id)arg1 intoDictionary:(id)arg2;
- (id)brailleSubstitutionForType:(long long)arg1 withLanguage:(id)arg2;
- (id)init;
- (id)stringWithBrailleSubstitutions:(id)arg1 withLanguage:(id)arg2;

@end


@interface INStringLocalizer : NSObject {
    NSMapTable * _bundleLocalizations;
    NSMapTable * _bundlesByIdentifier;
    NSMapTable * _bundlesByURL;
    NSString * _languageCode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _preferredBundleLocalizations;
    NSArray * _preferredLanguages;
}

@property (nonatomic, readonly) NSMapTable *bundleLocalizations;
@property (nonatomic, readonly) NSMapTable *bundlesByIdentifier;
@property (nonatomic, readonly) NSMapTable *bundlesByURL;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSMapTable *preferredBundleLocalizations;
@property (nonatomic, readonly) NSArray *preferredLanguages;

+ (id)alternativeLocales;
+ (id)localizerForLanguage:(id)arg1;
+ (id)siriLocalizer;

- (void).cxx_destruct;
- (id)bundleLocalizations;
- (struct __CFBundle { }*)bundleWithIdentifier:(id)arg1 fileURL:(id)arg2;
- (id)bundlesByIdentifier;
- (id)bundlesByURL;
- (id)init;
- (id)initWithLanguageCode:(id)arg1;
- (id)languageCode;
- (id)locale;
- (id)localizationsForBundle:(struct __CFBundle { }*)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)matchesBundleLocalizations:(struct __CFBundle { }*)arg1;
- (id)preferredBundleLocalizations;
- (id)preferredLanguages;
- (id)preferredLocalizationsForBundle:(struct __CFBundle { }*)arg1;

@end

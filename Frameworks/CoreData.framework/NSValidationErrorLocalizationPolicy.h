
@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {
    bool  _hasSetLocalizationDictionary;
    NSBundle * _localizationBundle;
    NSDictionary * _localizationDictionary;
    NSString * _modelStringsFileName;
    NSURL * _url;
}

- (id)_cachedObjectForKey:(id)arg1 value:(void*)arg2;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)localizationDictionary;
- (id)localizedEntityNameForEntity:(id)arg1;
- (id)localizedModelStringForKey:(id)arg1;
- (id)localizedPropertyNameForProperty:(id)arg1;
- (void)setLocalizationDictionary:(id)arg1;

@end

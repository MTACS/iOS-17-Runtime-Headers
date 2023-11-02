
@interface WBSPasswordManagerURL : NSObject

+ (id)_resourceSpecifierDictionaryForURL:(id)arg1;
+ (bool)_resourceSpecifierDictionaryIsPasswordManagerResourceSpecifierDictionary:(id)arg1;
+ (bool)_urlIsPasswordManagerURLWithScheme:(id)arg1 resourceSpecifierDictionary:(id)arg2;
+ (bool)boolForPasswordManagerResourceDictionary:(id)arg1 key:(id)arg2 defaultValue:(bool)arg3;
+ (id)dictionaryWithPasswordManagerURL:(id)arg1;
+ (bool)isOtpauthMigrationResourceDictionary:(id)arg1;
+ (bool)isOtpauthResourceDictionary:(id)arg1;
+ (bool)isPasswordManagerPasswordOptionsResourceDictionary:(id)arg1;
+ (bool)isPasswordManagerRecentlyDeletedResourceDictionary:(id)arg1;
+ (bool)isPasswordManagerSecurityRecommendationsResourceDictionary:(id)arg1;
+ (id)passwordManagerSecurityRecommendationsURL;
+ (id)passwordManagerURLForGeneratedPasswords;
+ (id)passwordManagerURLWithDictionary:(id)arg1;
+ (id)resourceSpecifierEncodedKey:(id)arg1 value:(id)arg2;
+ (bool)urlIsPasswordManagerURL:(id)arg1;
+ (id)valueForPasswordManagerResourceDictionary:(id)arg1 key:(id)arg2;
+ (id)valueForPasswordManagerURL:(id)arg1 key:(id)arg2;

@end

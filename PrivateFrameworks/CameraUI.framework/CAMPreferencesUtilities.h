
@interface CAMPreferencesUtilities : NSObject

+ (bool)boolInCameraDomainForKey:(id)arg1;
+ (id)colorForKey:(id)arg1 applicationID:(id)arg2;
+ (double)doubleForKey:(id)arg1 applicationID:(id)arg2 keyIsValidAndExists:(bool*)arg3;
+ (id)numericDictionaryForKey:(id)arg1 defaults:(id)arg2;
+ (void)setDictionary:(id)arg1 forKey:(id)arg2 defaults:(id)arg3;

@end

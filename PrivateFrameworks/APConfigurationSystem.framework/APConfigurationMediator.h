
@interface APConfigurationMediator : NSObject

+ (id)_configSystemErrorWithDescription:(id)arg1;
+ (void)_createPlistFile:(id)arg1 atPath:(id)arg2;
+ (id)_loadFromDefaultsForClass:(Class)arg1 error:(id*)arg2;
+ (id)_loadFromJSONForClass:(Class)arg1 error:(id*)arg2;
+ (id)_loadFromPathForClass:(Class)arg1 error:(id*)arg2;
+ (void)_removeFileAtPath:(id)arg1;
+ (id)configSystemDirectoryPath;
+ (id)configurationForClass:(Class)arg1;
+ (id)configurationForClass:(Class)arg1 usingCache:(bool)arg2;

@end

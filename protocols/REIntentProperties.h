
@protocol REIntentProperties <REExportedInterface>

@required

- (NSString *)_categoryVerb;
- (NSString *)_className;
- (NSString *)_nanoLaunchId;
- (bool)_supportsBackgroundExecution;
- (NSDictionary *)_validParameterCombinations;
- (NSString *)identifier;
- (NSString *)launchId;
- (NSString *)typeName;

@end

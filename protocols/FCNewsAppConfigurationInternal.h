
@protocol FCNewsAppConfigurationInternal <NSObject>

@required

- (NSDictionary *)configDictionary;
- (NSDictionary *)languageConfigDictionary;
- (NSString *)storefrontID;

@end

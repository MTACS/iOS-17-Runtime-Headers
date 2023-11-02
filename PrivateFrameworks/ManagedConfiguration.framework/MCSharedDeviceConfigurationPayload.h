
@interface MCSharedDeviceConfigurationPayload : MCPayload {
    NSString * _assetTagInformation;
    NSString * _lockScreenFootnote;
}

@property (nonatomic, readonly) NSString *assetTagInformation;
@property (nonatomic, readonly) NSDictionary *configuration;
@property (nonatomic, readonly) NSString *lockScreenFootnote;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)assetTagInformation;
- (id)configuration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)lockScreenFootnote;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end

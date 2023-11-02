
@interface MCSetupAssistantPayload : MCPayload {
    NSArray * _skipKeys;
}

@property (nonatomic, readonly) NSDictionary *configuration;
@property (nonatomic, readonly) NSArray *skipKeys;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)skipKeys;
- (id)stubDictionary;
- (id)verboseDescription;

@end

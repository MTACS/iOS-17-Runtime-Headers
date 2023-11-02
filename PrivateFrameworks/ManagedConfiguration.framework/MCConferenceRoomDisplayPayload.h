
@interface MCConferenceRoomDisplayPayload : MCPayload {
    NSString * _customMessage;
}

@property (nonatomic, readonly, copy) NSString *customMessage;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)configuration;
- (id)customMessage;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end

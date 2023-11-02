
@interface TTSAssistantVoiceMaps : NSObject {
    void deprecatedVoicesMap;
    void identifiersForVoicesMap;
    void relativeOrderForVoicesMap;
    void relativePitchOrderForVoicesMap;
    void voicesForLanguageMap;
}

@property (nonatomic, readonly) NSDictionary *deprecatedVoicesMap;
@property (nonatomic, readonly) NSDictionary *identifiersForVoicesMap;
@property (nonatomic, readonly) NSDictionary *relativeOrderForVoicesMap;
@property (nonatomic, readonly) NSDictionary *relativePitchOrderForVoicesMap;
@property (nonatomic, readonly) NSDictionary *voicesForLanguageMap;

- (void).cxx_destruct;
- (id)deprecatedVoicesMap;
- (id)identifiersForVoicesMap;
- (id)init;
- (id)relativeOrderForVoicesMap;
- (id)relativePitchOrderForVoicesMap;
- (id)voicesForLanguageMap;

@end

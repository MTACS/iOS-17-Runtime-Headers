
@interface SATTSFetchSpeechSynthesisVoiceRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *clientVoiceKeyList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SATTSSpeechSynthesisVoice *filteredVoiceKey;
@property (nonatomic, copy) NSString *gender;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)fetchSpeechSynthesisVoiceRequest;
+ (id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientVoiceKeyList;
- (id)encodedClassName;
- (id)filteredVoiceKey;
- (id)gender;
- (id)groupIdentifier;
- (id)languageCode;
- (bool)requiresResponse;
- (void)setClientVoiceKeyList:(id)arg1;
- (void)setFilteredVoiceKey:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setLanguageCode:(id)arg1;

@end

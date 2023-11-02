
@interface SASMultilingualDictationLanguageSelected : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSDictionary *confidenceScoresByLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *languageDetected;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)multilingualDictationLanguageSelected;
+ (id)multilingualDictationLanguageSelectedWithDictionary:(id)arg1 context:(id)arg2;

- (id)confidenceScoresByLanguage;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)languageDetected;
- (bool)requiresResponse;
- (void)setConfidenceScoresByLanguage:(id)arg1;
- (void)setLanguageDetected:(id)arg1;

@end

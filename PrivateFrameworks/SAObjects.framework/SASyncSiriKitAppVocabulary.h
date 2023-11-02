
@interface SASyncSiriKitAppVocabulary : SADomainObject

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSDictionary *customVocabularyMap;

- (id)bundleId;
- (id)customVocabularyMap;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setBundleId:(id)arg1;
- (void)setCustomVocabularyMap:(id)arg1;

@end

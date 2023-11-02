
@protocol _SFPBSearchSuggestion <NSObject>

@required

- (void)addDuplicateSuggestions:(_SFPBSearchSuggestion *)arg1;
- (NSString *)bundleIdentifier;
- (void)clearDuplicateSuggestions;
- (NSString *)detailText;
- (NSArray *)duplicateSuggestions;
- (_SFPBSearchSuggestion *)duplicateSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateSuggestionsCount;
- (NSString *)fbr;
- (bool)getServerFeatures:(double*)arg1 forKey:(NSString *)arg2;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (bool)previouslyEngaged;
- (NSString *)query;
- (NSString *)scopedSearchApplicationBundleIdentifier;
- (_SFPBGraphicalFloat *)score;
- (NSDictionary *)serverFeatures;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setDetailText:(NSString *)arg1;
- (void)setDuplicateSuggestions:(NSArray *)arg1;
- (void)setFbr:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setPreviouslyEngaged:(bool)arg1;
- (void)setQuery:(NSString *)arg1;
- (void)setScopedSearchApplicationBundleIdentifier:(NSString *)arg1;
- (void)setScore:(_SFPBGraphicalFloat *)arg1;
- (void)setServerFeatures:(NSDictionary *)arg1;
- (void)setServerFeatures:(double)arg1 forKey:(NSString *)arg2;
- (void)setSuggestion:(NSString *)arg1;
- (void)setTopicIdentifier:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setUtteranceText:(NSString *)arg1;
- (NSString *)suggestion;
- (NSString *)topicIdentifier;
- (int)type;
- (NSString *)utteranceText;

@end

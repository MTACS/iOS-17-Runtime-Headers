
@protocol SFSearchSuggestion <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSString *)detailText;
- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)duplicateSuggestions;
- (NSString *)fbr;
- (NSString *)identifier;
- (NSData *)jsonData;
- (bool)previouslyEngaged;
- (NSString *)query;
- (NSString *)scopedSearchApplicationBundleIdentifier;
- (double)score;
- (NSMutableDictionary *)serverFeatures;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setDetailText:(NSString *)arg1;
- (void)setDuplicateSuggestions:(NSArray *)arg1;
- (void)setFbr:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setPreviouslyEngaged:(bool)arg1;
- (void)setQuery:(NSString *)arg1;
- (void)setScopedSearchApplicationBundleIdentifier:(NSString *)arg1;
- (void)setScore:(double)arg1;
- (void)setServerFeatures:(NSMutableDictionary *)arg1;
- (void)setSuggestion:(NSString *)arg1;
- (void)setTopicIdentifier:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setUtteranceText:(NSString *)arg1;
- (NSString *)suggestion;
- (NSString *)topicIdentifier;
- (int)type;
- (NSString *)utteranceText;

@end

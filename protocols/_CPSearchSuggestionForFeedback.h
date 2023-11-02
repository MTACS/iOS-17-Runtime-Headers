
@protocol _CPSearchSuggestionForFeedback <NSObject>

@required

- (NSString *)fbr;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)query;
- (double)score;
- (void)setFbr:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setQuery:(NSString *)arg1;
- (void)setScore:(double)arg1;
- (void)setSuggestion:(NSString *)arg1;
- (void)setTopicIdentifier:(NSString *)arg1;
- (void)setType:(int)arg1;
- (NSString *)suggestion;
- (NSString *)topicIdentifier;
- (int)type;

@end

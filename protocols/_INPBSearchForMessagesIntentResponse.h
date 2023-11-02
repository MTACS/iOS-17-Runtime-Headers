
@protocol _INPBSearchForMessagesIntentResponse <NSObject>

@required

+ (Class)messagesType;
+ (Class)searchResultsType;

- (void)addMessages:(_INPBMessage *)arg1;
- (void)addSearchResults:(_INPBMessage *)arg1;
- (void)clearMessages;
- (void)clearSearchResults;
- (NSArray *)messages;
- (_INPBMessage *)messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)messagesCount;
- (NSArray *)searchResults;
- (_INPBMessage *)searchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchResultsCount;
- (void)setMessages:(NSArray *)arg1;
- (void)setSearchResults:(NSArray *)arg1;

@end

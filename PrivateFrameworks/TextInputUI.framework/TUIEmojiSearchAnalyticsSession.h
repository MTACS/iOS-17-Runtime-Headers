
@interface TUIEmojiSearchAnalyticsSession : TUIAnalyticsSession {
    NSString * _initialInputModeIdentifier;
    NSLocale * _locale;
    unsigned long long  _numberOfCharactersDeleted;
    unsigned long long  _numberOfCharactersInserted;
    unsigned long long  _numberOfClearActions;
    unsigned long long  _numberOfEmojiInserted;
    unsigned long long  _numberOfInitialCharacters;
    NSString * _trackedSearchQuery;
}

+ (id)emojiSearchFieldSpecTuples;
+ (void)registerEventSpecIfNecessary;

- (void).cxx_destruct;
- (void)beginSessionWithInitialSearchQuery:(id)arg1;
- (void)clearButtonPressed;
- (void)emojiInserted:(id)arg1;
- (void)endSession;
- (id)initWithLocale:(id)arg1;
- (void)searchQueryWasChangedTo:(id)arg1;

@end

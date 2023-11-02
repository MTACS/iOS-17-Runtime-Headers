
@interface ICHashtagSuggestionItem : NSObject {
    NSString * _displayText;
    NSDate * _lastUsedDate;
    NSString * _tokenContentIdentifier;
}

@property (nonatomic, retain) NSString *displayText;
@property (nonatomic, retain) NSDate *lastUsedDate;
@property (nonatomic, retain) NSString *tokenContentIdentifier;

+ (id)sortedItems:(id)arg1 context:(id)arg2;
+ (id)sortedSuggestionItemsWithHashtagsIncludingHashtagsFromOtherApps:(id)arg1 context:(id)arg2;
+ (id)suggestionItemsWithHashtagsIncludingHashtagsFromOtherApps:(id)arg1;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)displayText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastUsedDate;
- (void)setDisplayText:(id)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setTokenContentIdentifier:(id)arg1;
- (id)tokenContentIdentifier;

@end

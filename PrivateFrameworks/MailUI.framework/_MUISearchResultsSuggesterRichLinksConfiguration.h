
@interface _MUISearchResultsSuggesterRichLinksConfiguration : NSObject <EFLoggable, MUISearchResultsSuggesterConfiguration>

@property (nonatomic, readonly) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *fetchAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic, readonly) unsigned long long maxItemCount;
@property (readonly) Class superclass;

+ (id)log;

- (id)categories;
- (id)fetchAttributes;
- (id)logIdentifier;
- (unsigned long long)maxItemCount;
- (id)processSuggestionsResults:(id)arg1 phraseManager:(id)arg2 messageList:(id)arg3;
- (id)suggestionFilterQueryWithPhraseManager:(id)arg1 senderFilterQuery:(id)arg2;

@end

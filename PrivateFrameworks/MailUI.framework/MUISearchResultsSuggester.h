
@interface MUISearchResultsSuggester : NSObject <EFLoggable, MUISearchSuggester> {
    NSString * _bundleID;
    <MUISearchResultsSuggesterConfiguration> * _configuration;
    EMMessageRepository * _messageRepository;
    MUISearchSenderQueryManager * _senderQueryManager;
}

@property (nonatomic, readonly) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic, readonly) bool shouldQueryForAsYouType;
@property (readonly) Class superclass;

+ (id)dateAttributes;
+ (id)dateForSuggestionResult:(id)arg1;
+ (id)dateQueryString;
+ (id)documentsSuggesterWithBundleID:(id)arg1 messageRepository:(id)arg2 senderQueryManager:(id)arg3;
+ (id)linksSuggesterWithBundleID:(id)arg1 messageRepository:(id)arg2 senderQueryManager:(id)arg3;
+ (id)log;
+ (id)suggestionResultsSortedByDate:(id)arg1;

- (void).cxx_destruct;
- (id)categories;
- (id)generateSuggestionsUsingPhraseManager:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithBundleID:(id)arg1 messageRepository:(id)arg2 senderQueryManager:(id)arg3 configuration:(id)arg4;
- (id)logIdentifier;
- (bool)shouldQueryForAsYouType;

@end

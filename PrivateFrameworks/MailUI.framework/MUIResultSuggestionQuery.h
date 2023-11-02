
@interface MUIResultSuggestionQuery : NSObject <MUISearchSuggesterQuery> {
    NSString * _bundleID;
    <MUISearchResultsSuggesterConfiguration> * _configuration;
    id /* block */  _handler;
    EMMessageRepository * _messageRepository;
    MUISearchSuggestionPhraseManager * _phraseManager;
    MUISearchSenderQueryManager * _senderQueryManager;
    EMSearchableIndexUserQuery * _underlyingQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;

@end

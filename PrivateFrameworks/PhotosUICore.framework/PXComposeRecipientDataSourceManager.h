
@interface PXComposeRecipientDataSourceManager : NSObject <PXSectionedDataSourceManagerObserver, PXTapToRadar> {
    NSMutableArray * _composeRecipients;
    PXComposeRecipientDataSource * _dataSource;
    <PXComposeRecipientDataSourceManagerDelegate> * _delegate;
    unsigned long long  _numberOfPeopleSuggested;
    PXPeopleSuggestionsDataSource * _peopleSuggestionsDataSource;
    PXPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
    NSMutableSet * _recipients;
    long long  _sourceType;
}

@property (nonatomic, retain) PXComposeRecipientDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXComposeRecipientDataSourceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfPeopleSuggested;
@property (nonatomic, retain) PXPeopleSuggestionsDataSource *peopleSuggestionsDataSource;
@property (nonatomic, retain) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic, readonly) long long sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addComposeRecipients:(id)arg1;
- (id)_composeRecipientsFromCurrentPeopleSuggestionsDataSource;
- (id)_createComposeRecipientDataSourceFromCurrentState;
- (long long)_lastValidComposeRecipientIndex;
- (void)_replaceComposeRecipientAtIndex:(long long)arg1 withComposeRecipient:(id)arg2;
- (void)addRecipients:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (void)deleteComposeRecipientAtIndex:(unsigned long long)arg1;
- (id)diagnosticDictionary;
- (id)init;
- (id)initWithPeopleSuggestionsDataSourceManager:(id)arg1 sourceType:(long long)arg2;
- (unsigned long long)numberOfPeopleSuggested;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)peopleSuggestionsDataSource;
- (id)peopleSuggestionsDataSourceManager;
- (void)replaceComposeRecipientAtIndex:(unsigned long long)arg1 withNewComposeRecipient:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumberOfPeopleSuggested:(unsigned long long)arg1;
- (void)setPeopleSuggestionsDataSource:(id)arg1;
- (void)setPeopleSuggestionsDataSourceManager:(id)arg1;
- (long long)sourceType;

@end

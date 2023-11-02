
@interface PXCNRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <CNAutocompleteSearchConsumer> {
    NSArray * __searchResults;
    long long  __verificationType;
    NSMutableArray * _autocompleteSearchResults;
    PXSharedLibraryParticipantValidationManager * _cloudKitShareQueryController;
    NSObject<OS_dispatch_queue> * _creationQueue;
    _Atomic unsigned int  _currentAtomicSearchTaskID;
    NSNumber * _currentSearchTaskID;
    PXIDSAddressQueryController * _idsAddressQueryController;
    CNAutocompleteSearchManager * _searchManager;
    NSDictionary * _searchResultsByDestination;
    NSObject<OS_dispatch_queue> * _searchResultsQueue;
}

@property (setter=_setSearchResults:, nonatomic, retain) NSArray *_searchResults;
@property (nonatomic, readonly) long long _verificationType;
@property (nonatomic, readonly) PXCNRecipientSearchDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createDataSource;
- (void)_creationQueue_creatingRecipientSearchResultsForResults:(id)arg1 forSearchTaskID:(id)arg2;
- (void)_finishedCreatingRecipientSearchResults:(id)arg1 forSearchTaskID:(id)arg2;
- (void)_handleAddressQueryResults:(id)arg1 error:(id)arg2;
- (id)_searchResults;
- (void)_setSearchResults:(id)arg1;
- (long long)_verificationType;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (id)initWithVerificationType:(long long)arg1;
- (void)queryStringDidChange;
- (void)removeRecipientResult:(id)arg1;

@end

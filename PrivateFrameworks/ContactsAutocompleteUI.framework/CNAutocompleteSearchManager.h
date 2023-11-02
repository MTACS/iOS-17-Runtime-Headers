
@interface CNAutocompleteSearchManager : NSObject {
    unsigned long long  _autocompleteSearchType;
    CNAutocompleteStore * _autocompleteStore;
    int  _contactSearchAccountChangedToken;
    NSMutableArray * _corecipientSearchTaskIDs;
    NSArray * _explicitSearchAccountIDs;
    <CNAutocompleteUIFetchDelegate> * _fetchDelegate;
    unsigned int  _genNumber;
    unsigned long long  _implicitGroupCreationThreshold;
    bool  _includeUpcomingEventMembers;
    NSOperationQueue * _queue;
    NSString * _recentsBundleIdentifier;
    bool  _registeredForAddressBookChanges;
    NSArray * _searchAccounts;
    unsigned long long  _searchTypes;
    NSString * _sendingAccountIdentifier;
    NSString * _sendingAddress;
    NSNumber * _shouldIncludeGroupResultsImpl;
    bool  _shouldUnifyResults;
    bool  _simulatedResultsEnabled;
    NSMutableDictionary * _taskContextsByTaskID;
}

@property (nonatomic) unsigned long long autocompleteSearchType;
@property <CNAutocompleteUIFetchDelegate> *fetchDelegate;
@property (nonatomic) unsigned long long implicitGroupCreationThreshold;
@property (nonatomic) bool includeUpcomingEventMembers;
@property (nonatomic, copy) NSString *recentsBundleIdentifier;
@property (retain) NSArray *searchAccountIDs;
@property (nonatomic, readonly) NSArray *searchAccounts;
@property (nonatomic, copy) NSString *sendingAccountIdentifier;
@property (nonatomic, copy) NSString *sendingAddress;
@property (nonatomic) bool shouldIncludeGroupResults;
@property (nonatomic) bool shouldUnifyResults;
@property (getter=isSimulatedResultsEnabled, nonatomic) bool simulatedResultsEnabled;

- (void).cxx_destruct;
- (void)_handleContactsAutocompleteSearch:(id)arg1 returnedResults:(id)arg2 taskID:(id)arg3;
- (void)_handleContactsAutocompleteSearchFinished:(id)arg1 taskID:(id)arg2;
- (void)_handleTaskFinished:(id)arg1 context:(id)arg2;
- (id)_nextTaskID;
- (unsigned long long)autocompleteSearchType;
- (void)cancelTaskWithID:(id)arg1;
- (void)dealloc;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)fetchDelegate;
- (unsigned long long)implicitGroupCreationThreshold;
- (bool)includeUpcomingEventMembers;
- (id)init;
- (id)initWithAutocompleteSearchType:(unsigned long long)arg1;
- (id)initWithAutocompleteStore:(id)arg1 searchType:(unsigned long long)arg2;
- (bool)isSimulatedResultsEnabled;
- (id)recentsBundleIdentifier;
- (void)removeRecipientResult:(id)arg1;
- (id)searchAccountIDs;
- (id)searchAccounts;
- (id)searchForCorecipientsWithAutocompleteFetchContext:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 withAutocompleteFetchContext:(id)arg2 consumer:(id)arg3;
- (id)sendingAccountIdentifier;
- (id)sendingAddress;
- (void)setAutocompleteSearchType:(unsigned long long)arg1;
- (void)setFetchDelegate:(id)arg1;
- (void)setImplicitGroupCreationThreshold:(unsigned long long)arg1;
- (void)setIncludeUpcomingEventMembers:(bool)arg1;
- (void)setRecentsBundleIdentifier:(id)arg1;
- (void)setSearchAccountIDs:(id)arg1;
- (void)setSearchTypes:(unsigned long long)arg1;
- (void)setSendingAccountIdentifier:(id)arg1;
- (void)setSendingAddress:(id)arg1;
- (void)setShouldIncludeGroupResults:(bool)arg1;
- (void)setShouldUnifyResults:(bool)arg1;
- (void)setSimulatedResultsEnabled:(bool)arg1;
- (bool)shouldIncludeGroupResults;
- (bool)shouldUnifyResults;

@end

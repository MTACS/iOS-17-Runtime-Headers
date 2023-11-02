
@interface TUSearchController : NSObject {
    CNContactStore * _contactStore;
    NSMutableSet * _idsDestinations;
    NSMutableArray * _recentsModules;
    NSMutableDictionary * _searchModules;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _searchModulesLock;
    NSObject<OS_dispatch_queue> * _searchQueue;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSMutableArray *recentsModules;
@property (nonatomic, retain) NSMutableDictionary *searchModules;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *searchQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelRecentSearches;
- (void)_cancelSearchsForSearchTerm:(id)arg1;
- (void)_clearIdsDestinations;
- (void)_fetchIdsDestinationsIfNeeded:(id)arg1 withReason:(int)arg2;
- (id /* block */)_searchModuleCompletionWithModules:(id)arg1 searchTerm:(id)arg2 resultsClass:(Class)arg3 completion:(id /* block */)arg4;
- (id)contactStore;
- (id)init;
- (id /* block */)recentsModuleCompletionWithCompletion:(id /* block */)arg1;
- (id)recentsModules;
- (void)recentsWithCompletion:(id /* block */)arg1;
- (void)searchForString:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)searchModuleCompletionWithSearchTerm:(id)arg1 completion:(id /* block */)arg2;
- (id)searchModules;
- (id)searchQueue;
- (void)setContactStore:(id)arg1;
- (void)setRecentsModules:(id)arg1;
- (void)setSearchModules:(id)arg1;
- (void)setSearchQueue:(id)arg1;

@end

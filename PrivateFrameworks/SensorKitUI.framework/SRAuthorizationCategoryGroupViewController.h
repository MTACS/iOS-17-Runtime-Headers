
@interface SRAuthorizationCategoryGroupViewController : UITableViewController <SRAuthorizationCellDelegate, UITableViewDelegatePrivate> {
    NSBundle * _appBundle;
    SRAuthorizationStore * _authStore;
    NSMutableDictionary * _readerAuthState;
    NSArray * _sortedReaderAuthorizationServices;
    NSArray * _sortedWriterAuthorizationServices;
    NSMutableDictionary * _writerAuthState;
}

@property (nonatomic, retain) NSBundle *appBundle;
@property (retain) SRAuthorizationStore *authStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *readerAuthState;
@property (nonatomic, retain) NSArray *sortedReaderAuthorizationServices;
@property (nonatomic, retain) NSArray *sortedWriterAuthorizationServices;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *writerAuthState;

- (id)appBundle;
- (id)authStore;
- (void)authorizationSwitchToggledWithValue:(bool)arg1 indexPath:(id)arg2;
- (void)confirmAuthChangeForService:(id)arg1 value:(bool)arg2 indexPath:(id)arg3 setOverride:(bool)arg4;
- (void)dealloc;
- (bool)indexPathIsInWriterSection:(id)arg1;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)openPrivacy;
- (long long)readerAuthSectionStart;
- (id)readerAuthState;
- (id)serviceFromIndexPath:(id)arg1;
- (void)setAppBundle:(id)arg1;
- (void)setAuthStore:(id)arg1;
- (void)setReaderAuthState:(id)arg1;
- (void)setSortedReaderAuthorizationServices:(id)arg1;
- (void)setSortedWriterAuthorizationServices:(id)arg1;
- (void)setWriterAuthState:(id)arg1;
- (id)sortedReaderAuthorizationServices;
- (id)sortedWriterAuthorizationServices;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)usageSectionStart;
- (void)viewDidLoad;
- (long long)writerAuthSectionStart;
- (id)writerAuthState;

@end


@protocol CNContactDataSource <NSObject, NSCopying>

@required

- (bool)canReload;
- (CNContact *)completeContactFromContact:(CNContact *)arg1 fromMainStoreOnly:(bool)arg2 keysToFetch:(NSArray *)arg3;
- (NSDictionary *)contactMatchInfos;
- (NSArray *)contacts;
- (<CNContactDataSourceDelegate> *)delegate;
- (NSIndexPath *)indexPathForContact:(CNContact *)arg1;
- (NSArray *)indexSections;
- (NSArray *)sections;
- (void)setDelegate:(id <CNContactDataSourceDelegate>)arg1;

@optional

- (CNContactFormatter *)contactFormatter;
- (NSString *)displayName;
- (CNContactFilter *)effectiveFilter;
- (CNContactFilter *)filter;
- (void)invalidate;
- (bool)isLoading;
- (void)reload;
- (void)reset;
- (void)setContactFormatter:(CNContactFormatter *)arg1;
- (void)setFilter:(CNContactFilter *)arg1;
- (bool)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
- (CNContactStore *)store;

@end

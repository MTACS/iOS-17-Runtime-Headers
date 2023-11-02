
@interface CNContainerDataSource : NSObject {
    CNContactViewCache * _contactViewCache;
    NSArray * _containerPickerItems;
    NSArray * _containers;
    bool  _ignoresExchangeContainers;
    CNContactStore * _store;
}

@property (nonatomic, retain) CNContactViewCache *contactViewCache;
@property (nonatomic, retain) NSArray *containerPickerItems;
@property (nonatomic, retain) NSArray *containers;
@property (nonatomic) bool ignoresExchangeContainers;
@property (nonatomic, retain) CNContactStore *store;

+ (id)os_log;

- (void).cxx_destruct;
- (id)allAccounts;
- (id)contactViewCache;
- (id)containerPickerItems;
- (id)containers;
- (void)discoverContainers;
- (bool)ignoresExchangeContainers;
- (id)initWithContactStore:(id)arg1;
- (void)setContactViewCache:(id)arg1;
- (void)setContainerPickerItems:(id)arg1;
- (void)setContainers:(id)arg1;
- (void)setIgnoresExchangeContainers:(bool)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (id)writableContainersForAccount:(id)arg1;

@end


@interface SCLUnlockHistoryPersistentStore : NSObject {
    NSURL * _URL;
    NSPersistentContainer * _persistentContainer;
    NSManagedObjectContext * _storeContext;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSPersistentContainer *persistentContainer;
@property (retain) NSManagedObjectContext *storeContext;

- (void).cxx_destruct;
- (id)URL;
- (void)dealloc;
- (bool)deleteHistory:(id*)arg1;
- (id)initWithURL:(id)arg1;
- (bool)insertItem:(id)arg1;
- (void)loadStore;
- (id)persistentContainer;
- (bool)purgeOldItems;
- (id)recentHistoryItems;
- (id)recentItemsThresholdDate;
- (void)setStoreContext:(id)arg1;
- (id)storeContext;

@end

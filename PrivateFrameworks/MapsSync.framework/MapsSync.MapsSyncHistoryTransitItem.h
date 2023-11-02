
@interface MapsSync.MapsSyncHistoryTransitItem : MapsSync.MapsSyncHistoryItem {
    void _muid;
    void _transitLineStorage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSData *transitLineItemStorageData;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)description;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (unsigned long long)muid;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;
- (id)transitLineItemStorageData;

@end


@interface KMCalendarEventBridge : NSObject <KMProviderDatasetBridge> {
    EKEventStore * _eventStore;
    KVItemMapper * _itemMapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)eventStore;
- (id)init;
- (long long)itemType;
- (id)originAppId;
- (void)setEventStore:(id)arg1;

@end

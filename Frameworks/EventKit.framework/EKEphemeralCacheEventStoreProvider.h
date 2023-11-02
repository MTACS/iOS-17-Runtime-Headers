
@interface EKEphemeralCacheEventStoreProvider : NSObject <EKEventStoreProvider> {
    EKTimedEventStorePurger * _eventStorePurger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)eventStore;
- (id)initWithCreationBlock:(id /* block */)arg1;

@end

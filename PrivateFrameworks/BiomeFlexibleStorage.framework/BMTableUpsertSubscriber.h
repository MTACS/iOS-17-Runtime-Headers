
@interface BMTableUpsertSubscriber : NSObject <BMTableSubscriber> {
    NSString * _identifier;
    <BMFlexibleSimpleKeyValueStorage> * _keyValueStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BPSPublisher> * _publisher;
    BMTableStore * _store;
    BPSSubscription * _subscription;
    NSString * _tableName;
    bool  _tableSetupComplete;
    NSError * _tableSetupError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) <BMFlexibleSimpleKeyValueStorage> *keyValueStore;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) <BPSPublisher> *publisher;
@property (nonatomic, readonly) BMTableStore *store;
@property (nonatomic) BPSSubscription *subscription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tableName;
@property (nonatomic) bool tableSetupComplete;
@property (nonatomic, retain) NSError *tableSetupError;

- (void).cxx_destruct;
- (void)cancel;
- (void)completeWithError:(id)arg1;
- (void)handleInput:(id)arg1;
- (id)identifier;
- (id)initWithTableName:(id)arg1 identifier:(id)arg2;
- (id)initWithTableName:(id)arg1 identifier:(id)arg2 keyValueStore:(id)arg3;
- (id)keyValueStore;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)newBookmark;
- (id)publisher;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestNextEvents;
- (void)setPublisher:(id)arg1;
- (void)setSubscription:(id)arg1;
- (void)setTableSetupComplete:(bool)arg1;
- (void)setTableSetupError:(id)arg1;
- (id)store;
- (void)subscribeTo:(id)arg1;
- (id)subscription;
- (id)tableName;
- (bool)tableSetupComplete;
- (id)tableSetupError;

@end

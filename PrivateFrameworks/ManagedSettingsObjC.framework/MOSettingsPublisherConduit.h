
@interface MOSettingsPublisherConduit : MOSubscriber <MOSubscription> {
    bool  _active;
    unsigned long long  _demand;
    MOSubscriber * _downstream;
    NSUUID * _identifier;
    NSSet * _interestedGroups;
    NSObject * _lock;
    id /* block */  _startBlock;
    id /* block */  _stopBlock;
    <MOSubscription> * _upstream;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) unsigned long long currentDemand;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long demand;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MOSubscriber *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSSet *interestedGroups;
@property (nonatomic, readonly) NSObject *lock;
@property (nonatomic, readonly) id /* block */ startBlock;
@property (nonatomic, readonly) id /* block */ stopBlock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MOSubscription> *upstream;

- (void).cxx_destruct;
- (bool)active;
- (void)cancel;
- (unsigned long long)currentDemand;
- (void)dealloc;
- (unsigned long long)demand;
- (id)downstream;
- (id)identifier;
- (id)initWithDownstream:(id)arg1 interestedGroups:(id)arg2 startBlock:(id /* block */)arg3 stopBlock:(id /* block */)arg4;
- (id)interestedGroups;
- (id)lock;
- (void)receiveCompletion:(id)arg1;
- (unsigned long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(unsigned long long)arg1;
- (id /* block */)startBlock;
- (id /* block */)stopBlock;
- (id)upstream;

@end

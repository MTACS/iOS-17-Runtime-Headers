
@interface BKIOHIDServiceMatcher : NSObject <BSInvalidatable> {
    <BKIOHIDServiceMatcherDataProviding> * _dataProvider;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _matchingDictionary;
    <BKIOHIDServiceMatchObserver> * _observer;
    NSObject<OS_dispatch_queue> * _observerQueue;
    BKSHIDEventSenderDescriptor * _senderDescriptor;
    Class  _serviceClass;
    bool  _startedMatching;
}

@property (nonatomic, retain) <BKIOHIDServiceMatcherDataProviding> *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *matchingDictionary;
@property (nonatomic) <BKIOHIDServiceMatchObserver> *observer;
@property (nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, retain) Class serviceClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_expectDeallocation;
- (void)_lock_servicesAdded:(id)arg1;
- (void)_servicesAdded:(id)arg1;
- (id)_servicesForIOHIDServiceRefs:(id)arg1;
- (id)dataProvider;
- (void)dealloc;
- (id)existingServices;
- (id)initWithMatchingDictionary:(id)arg1 dataProvider:(id)arg2;
- (id)initWithMatchingDictionary:(id)arg1 serviceClass:(Class)arg2 dataProvider:(id)arg3;
- (id)initWithSenderDescriptor:(id)arg1 dataProvider:(id)arg2;
- (id)initWithUsagePage:(int)arg1 usage:(int)arg2 builtIn:(bool)arg3 dataProvider:(id)arg4;
- (void)invalidate;
- (id)matchingDictionary;
- (id)observer;
- (id)observerQueue;
- (Class)serviceClass;
- (void)setDataProvider:(id)arg1;
- (void)setMatchingDictionary:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setServiceClass:(Class)arg1;
- (void)startObserving:(id)arg1 queue:(id)arg2;

@end

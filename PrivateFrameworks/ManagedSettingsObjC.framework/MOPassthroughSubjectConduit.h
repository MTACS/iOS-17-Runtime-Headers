
@interface MOPassthroughSubjectConduit : NSObject <MOSubscription> {
    bool  _active;
    unsigned long long  _demand;
    MOSubscriber * _downstream;
    NSUUID * _identifier;
    NSObject * _lock;
    MOPassthroughSubject * _parent;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) unsigned long long currentDemand;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long demand;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MOSubscriber *downstream;
@property (nonatomic, readonly) bool hasDemand;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSObject *lock;
@property (nonatomic, readonly) MOPassthroughSubject *parent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)active;
- (void)cancel;
- (unsigned long long)currentDemand;
- (void)dealloc;
- (unsigned long long)demand;
- (id)downstream;
- (void)finishWithCompletion:(id)arg1;
- (bool)hasDemand;
- (id)identifier;
- (id)initWithDownstream:(id)arg1 parent:(id)arg2;
- (id)lock;
- (void)offerInput:(id)arg1;
- (id)parent;
- (void)requestDemand:(unsigned long long)arg1;

@end

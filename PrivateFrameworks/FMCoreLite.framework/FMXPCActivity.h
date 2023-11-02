
@interface FMXPCActivity : NSObject {
    NSObject<OS_xpc_object> * _activity;
    bool  _checkedInAtLeastOnce;
    id /* block */  _criteriaBlock;
    id /* block */  _handlerBlock;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    FMQueueSynchronizer * _queueSynchronizer;
    id /* block */  _registrationBlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
}

@property (nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) bool checkedInAtLeastOnce;
@property (nonatomic, copy) id /* block */ criteriaBlock;
@property (nonatomic, copy) id /* block */ handlerBlock;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMQueueSynchronizer *queueSynchronizer;
@property (nonatomic, copy) id /* block */ registrationBlock;

- (void).cxx_destruct;
- (id)_getActivity;
- (id)activity;
- (void)activityHandler:(id)arg1;
- (bool)checkedInAtLeastOnce;
- (bool)continue;
- (id /* block */)criteriaBlock;
- (bool)defer;
- (bool)done;
- (id)getCriteria;
- (id /* block */)handlerBlock;
- (id)initWithName:(id)arg1 qos:(unsigned int)arg2 criteriaBlock:(id /* block */)arg3 handler:(id /* block */)arg4;
- (id)name;
- (void)processCheckin:(id)arg1;
- (id)queue;
- (id)queueSynchronizer;
- (void)register;
- (id /* block */)registrationBlock;
- (void)setActivity:(id)arg1;
- (void)setCheckedInAtLeastOnce:(bool)arg1;
- (void)setCriteriaBlock:(id /* block */)arg1;
- (void)setHandlerBlock:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueueSynchronizer:(id)arg1;
- (void)setRegistrationBlock:(id /* block */)arg1;
- (bool)shouldDefer;
- (void)unregister;
- (void)updateCriteria;
- (long long)updateCriteriaForActivity:(id)arg1;

@end

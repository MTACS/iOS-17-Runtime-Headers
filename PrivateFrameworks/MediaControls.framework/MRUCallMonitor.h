
@interface MRUCallMonitor : NSObject <CXCallObserverDelegate> {
    CXCallObserver * _callObserver;
    NSHashTable * _observers;
    bool  _onCall;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CXCallObserver *callObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (getter=isOnCall, nonatomic, readonly) bool onCall;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)callObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)init;
- (bool)isCallActive;
- (bool)isOnCall;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setCallObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOnCall:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)updateOnCall;

@end

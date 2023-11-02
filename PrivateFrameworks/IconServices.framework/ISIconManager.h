
@interface ISIconManager : NSObject {
    NSXPCConnection * _connection;
    ISIconCache * _iconCache;
    NSHashTable * _iconRegistry;
    NSObject<OS_dispatch_queue> * _internalQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
}

@property (retain) NSXPCConnection *connection;
@property (retain) ISIconCache *iconCache;
@property (retain) NSHashTable *iconRegistry;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSHashTable *observers;

+ (id)serviceName;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)addObserver:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)findOrRegisterIcon:(id)arg1;
- (id)iconCache;
- (id)iconRegistry;
- (id)internalQueue;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setIconCache:(id)arg1;
- (void)setIconRegistry:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setObservers:(id)arg1;

@end

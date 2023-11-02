
@interface CryptexEventSubscriber : NSObject {
    bool  _active;
    id /* block */  _callback;
    unsigned long long  _flags;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _xpcEventName;
}

@property (nonatomic) bool active;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *xpcEventName;

+ (void)attachToStream:(id)arg1 withRegistration:(id)arg2;
+ (void)detachFromStream:(id)arg1;
+ (void)initializeEventStream;
+ (id)streamQueue;
+ (id)subscribers;

- (void).cxx_destruct;
- (id)_handleXPCEvent:(id)arg1;
- (bool)active;
- (id /* block */)callback;
- (void)cancel;
- (void)dealloc;
- (unsigned long long)flags;
- (void)handleXPCEvent:(id)arg1;
- (id)initWithFlags:(unsigned long long)arg1 name:(id)arg2;
- (id)log;
- (id)queue;
- (id)registerForEvents:(unsigned long long)arg1 onQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setActive:(bool)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (id)xpcEventName;

@end

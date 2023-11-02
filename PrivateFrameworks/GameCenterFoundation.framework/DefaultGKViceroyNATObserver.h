
@interface DefaultGKViceroyNATObserver : NSObject <GKNATObserverDelegate, GKViceroyNATObserver> {
    GKNATObserver * _natObserver;
    NSObject<OS_dispatch_queue> * _natQueue;
    NSObject<OS_dispatch_semaphore> * _natSemaphore;
    int  _natType;
}

@property (nonatomic, readonly) unsigned long long currentNATType;
@property (nonatomic, retain) GKNATObserver *natObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *natQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *natSemaphore;
@property (nonatomic) int natType;

+ (id)syncQueue;

- (void).cxx_destruct;
- (void)NATTypeDidChange:(int)arg1;
- (void)applySettingsAndAwaitReady:(id)arg1;
- (void)awaitReady;
- (unsigned long long)currentNATType;
- (void)getNATTypeWithForceRelay:(bool)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (id)natObserver;
- (id)natQueue;
- (id)natSemaphore;
- (int)natType;
- (void)performAsync:(id /* block */)arg1;
- (void)performSync:(id /* block */)arg1;
- (void)setNatObserver:(id)arg1;
- (void)setNatQueue:(id)arg1;
- (void)setNatSemaphore:(id)arg1;
- (void)setNatType:(int)arg1;
- (void)setupObserver;
- (void)tearDownObserver;

@end

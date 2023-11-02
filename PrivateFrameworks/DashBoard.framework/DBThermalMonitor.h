
@interface DBThermalMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned long long  _coldLevel;
    int  _coldToken;
    unsigned long long  _hotLevel;
    int  _hotToken;
    long long  _level;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _thermalBlocked;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned long long coldLevel;
@property (nonatomic) int coldToken;
@property (nonatomic) unsigned long long hotLevel;
@property (nonatomic) int hotToken;
@property (nonatomic, readonly) long long level;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isThermalBlocked, nonatomic) bool thermalBlocked;

- (void).cxx_destruct;
- (void)_queue_respondToCurrentThermalCondition;
- (void)_startListeningForThermalEvents;
- (void)addObserver:(id)arg1;
- (id)callbackQueue;
- (unsigned long long)coldLevel;
- (int)coldToken;
- (void)dealloc;
- (unsigned long long)hotLevel;
- (int)hotToken;
- (id)init;
- (bool)isThermalBlocked;
- (long long)level;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setColdLevel:(unsigned long long)arg1;
- (void)setColdToken:(int)arg1;
- (void)setHotLevel:(unsigned long long)arg1;
- (void)setHotToken:(int)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setThermalBlocked:(bool)arg1;

@end

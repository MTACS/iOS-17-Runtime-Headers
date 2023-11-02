
@interface DSMotionStateListenerProxy : DSListener {
    NSData * _cachedData;
    DSProviderDevice * _cachedProvider;
    NSError * _error;
    <DSListenerClientProtocol> * _lastobserver;
    unsigned int  _listenerCount;
    int  _listenerState;
    NSHashTable * _observers;
    DSClientMotionDataOptions * _options;
    NSHashTable * _pendingObservers;
    NSDate * _previousIntervalStartTime;
}

@property (nonatomic, retain) NSData *cachedData;
@property (nonatomic, retain) DSProviderDevice *cachedProvider;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) <DSListenerClientProtocol> *lastobserver;
@property int listenerState;
@property (retain) NSHashTable *observers;
@property (nonatomic, retain) DSClientMotionDataOptions *options;
@property (retain) NSHashTable *pendingObservers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_clearCache;
- (void)_removeObserver:(id)arg1;
- (void)_replyWithCachedDataToObserver:(id)arg1;
- (id)cachedData;
- (id)cachedProvider;
- (id)error;
- (void)failedToStartListenerWithError:(id)arg1;
- (id)init;
- (id)lastobserver;
- (int)listenerState;
- (id)observers;
- (id)options;
- (id)pendingObservers;
- (void)receivedData:(id)arg1 fromProvider:(id)arg2;
- (void)requestMotionState;
- (void)setCachedData:(id)arg1;
- (void)setCachedProvider:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLastobserver:(id)arg1;
- (void)setListenerState:(int)arg1;
- (void)setObservers:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPendingObservers:(id)arg1;
- (void)startMotionStateListenerWithObserver:(id)arg1;
- (void)startedListener;
- (void)stopMotionStateListenerWithObserver:(id)arg1;
- (void)stoppedListener;
- (void)updateProviders:(id)arg1;

@end

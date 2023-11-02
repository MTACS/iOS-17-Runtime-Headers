
@interface AFPineBoardSystemStateObserver : NSObject {
    NSHashTable * _listeners;
    NSObject<OS_dispatch_group> * _pineBoardStateGroup;
    long long  _pineBoardStateGroupDepth;
    long long  _pineBoardSystemState;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) long long pineBoardSystemState;

+ (id)defaultObserver;

- (void).cxx_destruct;
- (void)_beginGroup;
- (void)_endGroup;
- (void)_handlePineBoardStateChange:(long long)arg1;
- (void)_startObservingPineBoardSystemState;
- (void)addListener:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (long long)pineBoardSystemState;
- (void)removeListener:(id)arg1;

@end

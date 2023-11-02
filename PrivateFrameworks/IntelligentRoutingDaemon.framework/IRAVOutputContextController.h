
@interface IRAVOutputContextController : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
    AVOutputContext * _outputContext;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSNotificationCenter *notificationCenter;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) AVOutputContext *outputContext;

- (void).cxx_destruct;
- (id)_associatedOutputContextForType:(long long)arg1;
- (void)_didUpdateOutputDevice:(id)arg1;
- (void)_didUpdatePredictedOutputDevice:(id)arg1;
- (void)_registerForAVOutputContextOutputDeviceDidChangeNotification;
- (void)_registerForAVOutputContextPredictedOutputDeviceDidChangeNotification;
- (void)_unregisterForAVOutputContextOutputDeviceDidChangeNotification;
- (void)_unregisterForAVOutputContextPredictedOutputDeviceDidChangeNotification;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)getOutputDevice;
- (id)getPredictedOutputDevice;
- (id)initWithOutputContextType:(long long)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)notificationCenter;
- (id)observers;
- (id)outputContext;
- (void)removeObserver:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOutputContext:(id)arg1;

@end

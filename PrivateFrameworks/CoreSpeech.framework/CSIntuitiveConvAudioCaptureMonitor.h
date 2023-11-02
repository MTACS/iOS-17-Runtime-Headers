
@interface CSIntuitiveConvAudioCaptureMonitor : NSObject {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    CSAudioStartStreamOption * _startStreamOption;
}

@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSAudioStartStreamOption *startStreamOption;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)notifyDidStartAudioCaptureSuccessfully:(bool)arg1 eventUUID:(id)arg2;
- (void)notifyDidStopAudioCaptureWithOption:(id)arg1 eventUUID:(id)arg2 error:(id)arg3;
- (void)notifyFetchedAudioStream:(id)arg1 successfully:(bool)arg2;
- (void)notifyWillStartAudioCaptureWithContext:(id)arg1 option:(id)arg2;
- (void)notifyWillStopAudioCaptureWithReason:(unsigned long long)arg1;
- (id)observers;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStartStreamOption:(id)arg1;
- (id)startStreamOption;
- (void)unregisterObserver:(id)arg1;

@end

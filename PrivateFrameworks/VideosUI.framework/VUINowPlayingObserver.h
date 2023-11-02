
@interface VUINowPlayingObserver : NSObject {
    <VUINowPlayingObserverDelegate> * _delegate;
    VUINowPlayingObservation * _latestObservation;
    bool  _observing;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    unsigned long long  _updateObservationContext;
}

@property (nonatomic) <VUINowPlayingObserverDelegate> *delegate;
@property (nonatomic, retain) VUINowPlayingObservation *latestObservation;
@property (getter=isObserving, nonatomic) bool observing;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic) unsigned long long updateObservationContext;

- (void).cxx_destruct;
- (void)_handleNowPlayingAppDidChangeNotification:(id)arg1;
- (void)_handleNowPlayingAppIsPlayingDidChangeNotification:(id)arg1;
- (void)_notifyDelegateLatestObservationDidChange:(id)arg1;
- (void)_startObserving;
- (void)_stopObserving;
- (void)_updateLatestObservation;
- (void)_updateLatestObservationWithBundleIdentifier:(id)arg1 playbackState:(unsigned int)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isObserving;
- (id)latestObservation;
- (id)serialProcessingDispatchQueue;
- (void)setDelegate:(id)arg1;
- (void)setLatestObservation:(id)arg1;
- (void)setObserving:(bool)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setUpdateObservationContext:(unsigned long long)arg1;
- (void)startObserving;
- (void)stopObserving;
- (unsigned long long)updateObservationContext;

@end

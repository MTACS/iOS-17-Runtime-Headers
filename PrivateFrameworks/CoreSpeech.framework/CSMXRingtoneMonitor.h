
@interface CSMXRingtoneMonitor : CSEventMonitor <CSMXSessionMonitorDelegate> {
    NSObject<OS_dispatch_queue> * _eventMonitorQueue;
    bool  _isAnyRingtoneCurrentlyPlaying;
    NSTimer * _ringtoneTimeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isAnyRingtoneCurrentlyPlaying;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelTimeoutTimer;
- (void)_handleEndRingtone;
- (void)_handleStartRingtone;
- (void)_notifyObserversOfRingtoneChange;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startTimeoutTimer;
- (void)_stopMonitoring;
- (void)_timerCallback;
- (id)init;
- (bool)isAnyRingtoneCurrentlyPlaying;
- (void)mxSessionMonitorSomeClientWentActive:(id)arg1;
- (void)setIsAnyRingtoneCurrentlyPlaying:(bool)arg1;

@end

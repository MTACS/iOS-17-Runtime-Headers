
@interface CSCrownPressSelfLoggerWatch : NSObject <CSSiriAssertionMonitorDelegate, CSSiriClientBehaviorMonitorDelegate> {
    unsigned long long  _displayWakeHostTime;
    bool  _listeningEnabled;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayWakeHostTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool listeningEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CSSiriAssertionMonitor:(id)arg1 didReceiveBacklightOnEnabled:(bool)arg2 atHostTime:(unsigned long long)arg3;
- (void)_emitCrownPressedEventwithMHUUID:(id)arg1 didUseAOM:(bool)arg2;
- (void)_handleDidStartStreamWithContext:(id)arg1 withOption:(id)arg2 successfully:(bool)arg3;
- (void)dealloc;
- (unsigned long long)displayWakeHostTime;
- (id)init;
- (bool)listeningEnabled;
- (id)queue;
- (void)setDisplayWakeHostTime:(unsigned long long)arg1;
- (void)setListeningEnabled:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setup;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;

@end

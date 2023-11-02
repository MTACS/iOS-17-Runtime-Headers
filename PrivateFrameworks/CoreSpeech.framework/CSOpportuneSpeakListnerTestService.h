
@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate> {
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    CSOpportuneSpeakListener * listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)opportuneSpeakListener:(id)arg1 didStopUnexpectedly:(bool)arg2;
- (void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(bool)arg2;
- (void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(bool)arg2;
- (void)receiveOpportuneSpeakListenerStart;
- (void)receiveOpportuneSpeakListenerStop;
- (void)start;

@end

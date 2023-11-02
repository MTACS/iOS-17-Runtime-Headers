
@interface CSSiriClientBehaviorMonitor : NSObject {
    CSAudioRecordContext * _audioRecordContext;
    NSString * _deviceId;
    bool  _isStreaming;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _recordRoute;
}

@property (nonatomic, retain) CSAudioRecordContext *audioRecordContext;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) bool isStreaming;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *recordRoute;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)audioRecordContext;
- (id)deviceId;
- (id)init;
- (bool)isStreaming;
- (void)notifyActivateAudioSessionWithReason:(unsigned long long)arg1;
- (void)notifyAudioDeviceInfoUpdated:(id)arg1;
- (void)notifyDidStartStreamWithContext:(id)arg1 successfully:(bool)arg2 option:(id)arg3 withEventUUID:(id)arg4;
- (void)notifyDidStopStream:(id)arg1 withEventUUID:(id)arg2;
- (void)notifyFetchedSiriClientAudioStream:(id)arg1 successfully:(bool)arg2;
- (void)notifyPreparedSiriClientAudioStream:(id)arg1 successfully:(bool)arg2;
- (void)notifyReleaseAudioSession;
- (void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2 withEventUUID:(id)arg3;
- (void)notifyWillStopStream:(id)arg1 reason:(unsigned long long)arg2 withEventUUID:(id)arg3;
- (id)observers;
- (id)queue;
- (id)recordRoute;
- (void)registerObserver:(id)arg1;
- (void)setAudioRecordContext:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setIsStreaming:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecordRoute:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end

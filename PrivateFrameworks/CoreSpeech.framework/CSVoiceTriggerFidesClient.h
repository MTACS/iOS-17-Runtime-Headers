
@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate> {
    CSAudioCircularBuffer * _audioBuffer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) CSAudioCircularBuffer *audioBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lastTriggerDataWithResult:(id)arg1;
- (void)_logDESRecordWithType:(long long)arg1 result:(id)arg2;
- (id)_medicalIDAge;
- (id)_medicalIDName;
- (id)audioBuffer;
- (id)init;
- (id)queue;
- (void)setAudioBuffer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)voiceTriggerGotSuperVector:(id)arg1;

@end

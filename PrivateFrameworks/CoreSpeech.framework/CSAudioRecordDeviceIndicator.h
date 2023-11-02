
@interface CSAudioRecordDeviceIndicator : NSObject {
    NSString * _deviceId;
    CSAudioRecordContext * _recordContext;
    bool  _shouldUseRemoteRecorder;
    unsigned long long  _streamHandleId;
}

@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) CSAudioRecordContext *recordContext;
@property (nonatomic, readonly) bool shouldUseRemoteRecorder;
@property (nonatomic, readonly) unsigned long long streamHandleId;

- (void).cxx_destruct;
- (id)deviceId;
- (id)initWithRecordContext:(id)arg1 deviceId:(id)arg2 shouldUseRemoteRecorder:(bool)arg3 streamHandleId:(unsigned long long)arg4;
- (id)recordContext;
- (bool)shouldUseRemoteRecorder;
- (unsigned long long)streamHandleId;
- (void)updateDeviceId:(id)arg1;
- (void)updateWithLatestRecordContext:(id)arg1;

@end

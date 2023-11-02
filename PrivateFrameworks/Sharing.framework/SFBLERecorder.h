
@interface SFBLERecorder : NSObject {
    long long  _payloadType;
    NSMutableArray * _recordings;
    <SFBLERecorderReplayDelegate> * _replayDelegate;
    unsigned long long  _replayIndex;
}

@property (nonatomic, readonly) long long payloadType;
@property (nonatomic) <SFBLERecorderReplayDelegate> *replayDelegate;

- (void).cxx_destruct;
- (id)initWithPayloadType:(long long)arg1;
- (id)initWithRecordingURL:(id)arg1;
- (long long)payloadType;
- (bool)recordDevice:(id)arg1 data:(id)arg2 rssi:(id)arg3 info:(id)arg4 error:(id*)arg5;
- (id)replayDelegate;
- (bool)replayNextRecording;
- (bool)saveToDirectory:(id)arg1;
- (void)setReplayDelegate:(id)arg1;

@end

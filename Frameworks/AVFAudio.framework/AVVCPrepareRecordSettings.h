
@interface AVVCPrepareRecordSettings : NSObject {
    NSDictionary * _avAudioSettings;
    unsigned int  _deviceBufferFrameSize;
    bool  _meteringEnabled;
    double  _recordBufferDuration;
    unsigned long long  _streamID;
}

@property (nonatomic, retain) NSDictionary *avAudioSettings;
@property (nonatomic) unsigned int deviceBufferFrameSize;
@property (nonatomic) bool meteringEnabled;
@property (nonatomic) double recordBufferDuration;
@property (nonatomic) unsigned long long streamID;

- (void).cxx_destruct;
- (id)avAudioSettings;
- (unsigned int)deviceBufferFrameSize;
- (id)initWithStreamID:(unsigned long long)arg1 settings:(id)arg2 bufferDuration:(double)arg3;
- (bool)meteringEnabled;
- (double)recordBufferDuration;
- (void)setAvAudioSettings:(id)arg1;
- (void)setDeviceBufferFrameSize:(unsigned int)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)setRecordBufferDuration:(double)arg1;
- (void)setStreamID:(unsigned long long)arg1;
- (unsigned long long)streamID;

@end

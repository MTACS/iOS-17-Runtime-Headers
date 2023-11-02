
@interface CSAudioStopStreamOption : NSObject <NSCopying> {
    unsigned long long  _expectedStopHostTime;
    CSAudioStreamHoldRequestOption * _holdRequest;
    unsigned long long  _stopRecordingReason;
    bool  _supportsMagus;
    double  _trailingSilenceDurationAtEndpoint;
}

@property (nonatomic, readonly) unsigned long long expectedStopHostTime;
@property (nonatomic, readonly) CSAudioStreamHoldRequestOption *holdRequest;
@property (nonatomic, readonly) unsigned long long stopRecordingReason;
@property (nonatomic, readonly) bool supportsMagus;
@property (nonatomic, readonly) double trailingSilenceDurationAtEndpoint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)expectedStopHostTime;
- (id)holdRequest;
- (id)initWithStopRecordingReason:(unsigned long long)arg1 expectedStopHostTime:(unsigned long long)arg2 trailingSilenceDurationAtEndpoint:(double)arg3;
- (id)initWithStopRecordingReason:(unsigned long long)arg1 expectedStopHostTime:(unsigned long long)arg2 trailingSilenceDurationAtEndpoint:(double)arg3 holdRequest:(id)arg4 supportsMagus:(bool)arg5;
- (id)initWithXPCObject:(id)arg1;
- (unsigned long long)stopRecordingReason;
- (bool)supportsMagus;
- (double)trailingSilenceDurationAtEndpoint;
- (id)xpcObject;

@end

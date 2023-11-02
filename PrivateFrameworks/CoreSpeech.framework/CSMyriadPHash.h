
@interface CSMyriadPHash : NSObject {
    float * _hammingWindow;
    NSObject<OS_dispatch_queue> * _queue;
    struct OpaqueFFTSetup { } * _setup;
    short  _signalEstimate;
    unsigned char  _signalFractional;
    struct OpaqueFFTSetup { } * _snrSetup;
    float * _snrWindow;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) short signalEstimate;
@property (nonatomic) unsigned char signalFractional;

+ (id)createHashResult:(unsigned short)arg1 goodness:(unsigned char)arg2 confidence:(unsigned char)arg3 absTime:(unsigned long long)arg4 frac:(unsigned char)arg5;
+ (id)createRemoraHashResult:(unsigned short)arg1 goodness:(unsigned char)arg2 confidence:(unsigned char)arg3 firstPassTriggerEndTime:(double)arg4 frac:(unsigned char)arg5;
+ (id)createRemoraHashResultFromPHash:(id)arg1 firstPassTriggerEndTime:(double)arg2;
+ (id)decodeWithMyriadPHash:(id)arg1;
+ (id)generateEmptyPHash:(unsigned long long)arg1 writeFile:(bool)arg2;
+ (id)lastHash;
+ (void)notifyAudioHashNotification;
+ (void)notifyAudioHashlessNotification;
+ (void)notifyHashlessTrigger:(unsigned long long)arg1;
+ (id)overridePHash:(id)arg1 withMachTime:(unsigned long long)arg2;
+ (void)setLastHash:(id)arg1;
+ (double)signalEstimateWithBuilder:(id /* block */)arg1;
+ (bool)writeHashResultIntoFile:(id)arg1;
+ (bool)writeHashlessResult:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_audioLogDirectory;
- (void)_copyAudioDataInBuffer:(float*)arg1 bufferSize:(unsigned long long)arg2 copyLength:(unsigned long long)arg3 fromAudioData:(void*)arg4;
- (void)_copyPsdDataInBuffer:(float*)arg1 copyLength:(unsigned long long)arg2 fromAudioData:(void*)arg3;
- (id)_generateMyriadInfo:(unsigned long long)arg1 hsStart:(unsigned long long)arg2 triggerEnd:(unsigned long long)arg3 writeFile:(bool)arg4 score:(float)arg5 triggerSource:(id)arg6 channel:(unsigned long long)arg7 audioProviderUUID:(id)arg8 absoluteTime:(unsigned long long)arg9;
- (double)_signalEstimate:(float*)arg1 length:(unsigned long long)arg2;
- (void)_surfacePsdWithAudioChunk:(id)arg1;
- (id)cachedHash;
- (void)dealloc;
- (id)generatePHashFromVoiceTriggerInfo:(id)arg1 writeFile:(bool)arg2;
- (id)init;
- (unsigned short)pHash:(float*)arg1 length:(int)arg2;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setSignalEstimate:(short)arg1;
- (void)setSignalFractional:(unsigned char)arg1;
- (short)signalEstimate;
- (unsigned char)signalFractional;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;

@end

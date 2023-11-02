
@interface CSAudioChunk : NSObject {
    unsigned long long  _arrivalHostTimeToAudioRecorder;
    NSData * _data;
    unsigned long long  _hostTime;
    unsigned long long  _numChannels;
    unsigned long long  _numSamples;
    NSData * _remoteVAD;
    unsigned long long  _sampleByteDepth;
    unsigned long long  _startSampleCount;
    bool  _wasBuffered;
}

@property (nonatomic, readonly) unsigned long long arrivalHostTimeToAudioRecorder;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long hostTime;
@property (nonatomic, readonly) unsigned long long numChannels;
@property (nonatomic, readonly) unsigned long long numSamples;
@property (nonatomic, retain) NSData *remoteVAD;
@property (nonatomic, readonly) bool remoteVADAvailable;
@property (nonatomic, readonly) unsigned long long sampleByteDepth;
@property (nonatomic, readonly) unsigned long long startSampleCount;
@property (nonatomic, readonly) bool wasBuffered;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation

- (void).cxx_destruct;
- (unsigned long long)arrivalHostTimeToAudioRecorder;
- (id)chunkForChannel:(unsigned long long)arg1;
- (unsigned long long)copySubAudioChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 to:(void*)arg3 dstBufferSize:(unsigned long long)arg4;
- (id)data;
- (id)dataForChannel:(unsigned long long)arg1;
- (id)dataWithRemoteVADWithScaleFactor:(float)arg1 numAudioSamplesPerRemoteVAD:(unsigned long long)arg2;
- (id)gainCompensatedChunk;
- (unsigned long long)hostTime;
- (id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6 arrivalHostTimeToAudioRecorder:(unsigned long long)arg7 wasBuffered:(bool)arg8 remoteVAD:(id)arg9;
- (id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6 remoteVAD:(id)arg7;
- (id)initWithXPCObject:(id)arg1;
- (unsigned long long)numChannels;
- (unsigned long long)numSamples;
- (id)remoteVAD;
- (bool)remoteVADAvailable;
- (id)remoteVADSubChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 numAudioSamplesPerRemoteVAD:(unsigned long long)arg3;
- (unsigned long long)sampleByteDepth;
- (void)setRemoteVAD:(id)arg1;
- (void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)startSampleCount;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 forChannel:(unsigned long long)arg3;
- (bool)wasBuffered;
- (id)xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)_fidesRecordInfo;

@end

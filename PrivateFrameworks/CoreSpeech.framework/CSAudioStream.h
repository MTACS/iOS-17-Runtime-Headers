
@interface CSAudioStream : NSObject <CSAudioStreamProvidingDelegate> {
    NSString * _UUID;
    <CSAudioStreamProvidingDelegate> * _delegate;
    bool  _isWeakStream;
    unsigned long long  _lastForwardedSampleCount;
    NSString * _name;
    bool  _needsBoost12dB;
    bool  _scheduledFutureSample;
    unsigned long long  _startSampleCount;
    CSAudioStartStreamOption * _startStreamOption;
    <CSAudioStreamProviding> * _streamProvider;
    CSAudioStreamRequest * _streamRequest;
    bool  _streaming;
    NSUUID * _streamingUUID;
    NSHashTable * _tandemStreams;
}

@property (nonatomic, readonly) NSString *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAudioStreamProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isWeakStream;
@property (nonatomic, readonly) unsigned long long lastForwardedSampleCount;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool needsBoost12dB;
@property (setter=setScheduledFutureSample:, nonatomic) bool scheduledFutureSample;
@property (nonatomic, readonly) unsigned long long startSampleCount;
@property (setter=setStartStreamOption:, nonatomic, retain) CSAudioStartStreamOption *startStreamOption;
@property (nonatomic) <CSAudioStreamProviding> *streamProvider;
@property (nonatomic, retain) CSAudioStreamRequest *streamRequest;
@property bool streaming;
@property (retain) NSUUID *streamingUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSHashTable *tandemStreams;

- (void).cxx_destruct;
- (id)UUID;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 lastForwardedSampleCount:(unsigned long long)arg3;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectedly:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithAudioStreamProvider:(id)arg1 streamName:(id)arg2 streamRequest:(id)arg3;
- (bool)isNarrowBand;
- (bool)isStreaming;
- (bool)isWeakStream;
- (unsigned long long)lastForwardedSampleCount;
- (id)name;
- (bool)needsBoost12dB;
- (bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id*)arg2;
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)recordSettings;
- (bool)scheduledFutureSample;
- (void)setDelegate:(id)arg1;
- (void)setIsWeakStream:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsBoost12dB:(bool)arg1;
- (void)setScheduledFutureSample:(bool)arg1;
- (void)setStartStreamOption:(id)arg1;
- (void)setStreamProvider:(id)arg1;
- (void)setStreamRequest:(id)arg1;
- (void)setStreaming:(bool)arg1;
- (void)setStreamingUUID:(id)arg1;
- (void)startAudioStreamWithOption:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)startSampleCount;
- (id)startStreamOption;
- (void)stopAudioStreamWithOption:(id)arg1 completion:(id /* block */)arg2;
- (id)streamProvider;
- (id)streamRequest;
- (bool)streaming;
- (id)streamingUUID;
- (id)tandemStreams;
- (void)updateAudioStreamStartTimeInSampleCount:(unsigned long long)arg1;

@end

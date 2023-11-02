
@interface NviCSAudioDataSource : NSObject <CSAudioStreamProvidingDelegate, NviAudioDataSource> {
    CSAudioStream * _audioStream;
    NviContext * _nviCtx;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _receivers;
}

@property (nonatomic, retain) CSAudioStream *audioStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numBytesPerSample;
@property (nonatomic, retain) NviContext *nviCtx;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSHashTable *receivers;
@property (nonatomic, readonly) unsigned long long sampleRate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)_createAudioStreamWithCurrentNviContext;
- (void)addReceiver:(id)arg1;
- (id)audioStream;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 avBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectedly:(long long)arg2;
- (id)init;
- (unsigned long long)numBytesPerSample;
- (id)nviCtx;
- (id)queue;
- (id)receivers;
- (void)removeReceiver:(id)arg1;
- (unsigned long long)sampleRate;
- (void)setAudioStream:(id)arg1;
- (void)setNviCtx:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReceivers:(id)arg1;
- (void)startWithNviContext:(id)arg1 didStartHandler:(id /* block */)arg2;
- (void)stopWithDidStopHandler:(id /* block */)arg1;
- (unsigned long long)type;

@end

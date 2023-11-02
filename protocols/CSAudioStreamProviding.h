
@protocol CSAudioStreamProviding <NSObject>

@required

- (NSString *)UUID;
- (void)attachTandemStream:(void *)arg1 toPrimaryStream:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CSAudioStream *, CSAudioStream *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (CSAudioChunk *)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (CSAudioChunk *)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3;
- (CSAudioChunk *)audioChunkToEndFrom:(unsigned long long)arg1;
- (CSAudioChunk *)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2;
- (CSAudioDeviceInfo *)audioDeviceInfo;
- (unsigned long long)audioStreamId;
- (void)audioStreamWithRequest:(void *)arg1 streamName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CSAudioStreamRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CSAudioStream *, NSError *, void*
- (CSAudioStream *)audioStreamWithRequest:(CSAudioStreamRequest *)arg1 streamName:(NSString *)arg2 error:(id*)arg3;
- (void)cancelAudioStreamHold:(CSAudioStreamHolding *)arg1;
- (CSAudioStreamHolding *)holdAudioStreamWithDescription:(NSString *)arg1 option:(CSAudioStreamHoldRequestOption *)arg2;
- (bool)isNarrowBand;
- (bool)isRecording;
- (NSString *)playbackRoute;
- (void)prepareAudioStream:(void *)arg1 request:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CSAudioStream *, CSAudioStreamRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)prepareAudioStreamSync:(CSAudioStream *)arg1 request:(CSAudioStreamRequest *)arg2 error:(id*)arg3;
- (CSAudioRecordDeviceInfo *)recordDeviceInfo;
- (NSString *)recordRoute;
- (NSDictionary *)recordSettings;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(NSURL *)arg3;
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(NSURL *)arg2;
- (void)setAnnounceCallsEnabled:(bool)arg1 withStreamHandleID:(unsigned long long)arg2;
- (bool)setCurrentContext:(CSAudioRecordContext *)arg1 error:(id*)arg2;
- (void)startAudioStream:(void *)arg1 option:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CSAudioStream *, CSAudioStartStreamOption *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stopAudioStream:(void *)arg1 option:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CSAudioStream *, CSAudioStopStreamOption *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)supportsDuckingOnCurrentRouteWithError:(id*)arg1;

@end

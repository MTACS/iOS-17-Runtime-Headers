
@protocol MOVStreamWriterDelegate <MOVStreamWriterDelegateDeprecationNominates>

@optional

- (void)streamWriter:(MOVStreamWriter *)arg1 changedStatusTo:(long long)arg2;
- (bool)streamWriter:(MOVStreamWriter *)arg1 encodedBuffer:(struct opaqueCMSampleBuffer { }*)arg2 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 metadata:(AVTimedMetadataGroup *)arg4 forStream:(NSString *)arg5;
- (void)streamWriter:(MOVStreamWriter *)arg1 inputForStream:(NSString *)arg2 changedIsReadyStatusTo:(bool)arg3;
- (void)streamWriter:(MOVStreamWriter *)arg1 mediaWrittenForStream:(NSString *)arg2 mediaType:(long long)arg3;
- (void)streamWriter:(MOVStreamWriter *)arg1 stream:(NSString *)arg2 preparedTrackInputs:(NSArray *)arg3 mediaType:(long long)arg4;
- (void)streamWriter:(MOVStreamWriter *)arg1 writingSessionDidStartAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 stream:(NSString *)arg3 mediaType:(long long)arg4;
- (void)streamWriterEncounteredAnError:(NSError *)arg1;
- (void)streamWriterReachedFinishingTimeout:(MOVStreamWriter *)arg1;

@end


@protocol MOVStreamReaderStreamOutputPrivate <NSObject>

@required

- (id)initWithAudioTrack:(AVAssetTrack *)arg1 assetReader:(AVAssetReader *)arg2 associatedMetadataTracks:(NSArray *)arg3 version:(MIOVersion *)arg4 unknownStreamId:(NSString *)arg5 reader:(MOVStreamReader *)arg6 delegate:(id <MOVStreamReaderDelegate>)arg7 error:(id*)arg8;
- (id)initWithMetadataTrack:(AVAssetTrack *)arg1 assetReader:(AVAssetReader *)arg2 version:(MIOVersion *)arg3 unknownStreamId:(NSString *)arg4 reader:(MOVStreamReader *)arg5 delegate:(id <MOVStreamReaderDelegate>)arg6 error:(id*)arg7;
- (id)initWithSceneTrack:(AVAssetTrack *)arg1 assetReader:(AVAssetReader *)arg2 associatedMetadataTracks:(NSArray *)arg3 version:(MIOVersion *)arg4 unknownStreamId:(NSString *)arg5 reader:(MOVStreamReader *)arg6 delegate:(id <MOVStreamReaderDelegate>)arg7 error:(id*)arg8;
- (id)initWithVideoTrack:(AVAssetTrack *)arg1 assetReader:(AVAssetReader *)arg2 associatedMetadataTracks:(NSArray *)arg3 version:(MIOVersion *)arg4 unknownStreamId:(NSString *)arg5 reader:(MOVStreamReader *)arg6 delegate:(id <MOVStreamReaderDelegate>)arg7 error:(id*)arg8;

@end

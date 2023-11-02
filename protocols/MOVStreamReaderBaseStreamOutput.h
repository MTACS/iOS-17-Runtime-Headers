
@protocol MOVStreamReaderBaseStreamOutput <NSObject>

@required

- (AVAssetTrack *)assetTrack;
- (bool)endOfStreamReached;
- (NSArray *)getAssociatedMetadataStreams;
- (NSArray *)grabNextMetadataItemsOfTrackAssociatedWithStreamWithIdentifier:(in NSString *)arg1 timeRange:(out struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 error:(out id*)arg3;
- (long long)mediaType;
- (NSString *)streamId;

@end

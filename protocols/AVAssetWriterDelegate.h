
@protocol AVAssetWriterDelegate <NSObject>

@optional

- (void)assetWriter:(AVAssetWriter *)arg1 didOutputSegmentData:(NSData *)arg2 segmentType:(long long)arg3;
- (void)assetWriter:(AVAssetWriter *)arg1 didOutputSegmentData:(NSData *)arg2 segmentType:(long long)arg3 segmentReport:(AVAssetSegmentReport *)arg4;

@end

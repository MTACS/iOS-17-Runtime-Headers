
@protocol HMIVideoAssetWriterDelegate <NSObject>

@required

- (void)assetWriter:(HMIVideoAssetWriter *)arg1 didFailWithError:(NSError *)arg2;
- (void)assetWriter:(HMIVideoAssetWriter *)arg1 didOutputInitializationSegment:(NSData *)arg2;
- (void)assetWriter:(HMIVideoAssetWriter *)arg1 didOutputSeparableSegment:(NSData *)arg2 segmentReport:(AVAssetSegmentReport *)arg3;

@end

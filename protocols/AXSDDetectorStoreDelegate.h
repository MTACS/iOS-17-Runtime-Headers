
@protocol AXSDDetectorStoreDelegate <NSObject>

@optional

- (void)detectorStore:(AXSDDetectorStore *)arg1 availableDetectorsDidUpdate:(NSArray *)arg2;
- (void)detectorStore:(AXSDDetectorStore *)arg1 detectorsNeedUpdate:(NSArray *)arg2 toDetectors:(NSArray *)arg3;
- (void)detectorStore:(AXSDDetectorStore *)arg1 didFinishRefreshingDetectors:(NSArray *)arg2 wasSuccessful:(bool)arg3 error:(NSError *)arg4;
- (void)detectorStore:(AXSDDetectorStore *)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(bool)arg5;
- (void)detectorsReadyForDetectorStore:(AXSDDetectorStore *)arg1;

@end

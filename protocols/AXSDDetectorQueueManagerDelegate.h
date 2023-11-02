
@protocol AXSDDetectorQueueManagerDelegate <NSObject>

@required

- (void)assetsReadyAndDetectorsAdded;
- (AXSDDetectorManager *)detectorManager;
- (void)setDetectorManager:(AXSDDetectorManager *)arg1;

@end

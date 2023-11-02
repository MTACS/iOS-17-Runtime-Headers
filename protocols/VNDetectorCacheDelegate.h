
@protocol VNDetectorCacheDelegate <NSObject>

@optional

- (void)detectorCache:(VNDetectorCache *)arg1 didCacheDetector:(VNDetector *)arg2;
- (void)detectorCache:(VNDetectorCache *)arg1 didEvictDetector:(VNDetector *)arg2;

@end

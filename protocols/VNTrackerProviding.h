
@protocol VNTrackerProviding

@required

- (void)releaseTracker:(VNTracker *)arg1;
- (Class)trackerClassForOptions:(NSDictionary *)arg1 error:(id*)arg2;
- (VNTracker *)trackerWithOptions:(NSDictionary *)arg1 error:(id*)arg2;

@end

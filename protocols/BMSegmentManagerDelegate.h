
@protocol BMSegmentManagerDelegate <NSObject>

@required

- (void)segmentManager:(BMSegmentManager *)arg1 willDeleteSegmentName:(NSString *)arg2 frameStore:(BMFrameStore *)arg3;

@end

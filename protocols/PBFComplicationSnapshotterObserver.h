
@protocol PBFComplicationSnapshotterObserver <NSObject>

@required

- (void)complicationSnapshotter:(PBFComplicationSnapshotter *)arg1 didFinishWithSnapshot:(UIImage *)arg2 error:(NSError *)arg3;

@end

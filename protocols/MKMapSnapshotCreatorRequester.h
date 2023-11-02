
@protocol MKMapSnapshotCreatorRequester <NSObject>

@required

- (void)mapSnapshotCreator:(MKMapSnapshotCreator *)arg1 didCreateSnapshot:(UIImage *)arg2 attributionString:(NSString *)arg3 context:(id)arg4;

@optional

- (UIView *)mapSnapshotCreator:(MKMapSnapshotCreator *)arg1 viewForContext:(id)arg2;

@end

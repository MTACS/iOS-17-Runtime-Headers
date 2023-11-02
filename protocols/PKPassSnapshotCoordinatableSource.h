
@protocol PKPassSnapshotCoordinatableSource <NSObject>

@required

- (PKPaymentCredential *)credential;
- (bool)isSnapshotFetchInProgress;
- (UIImage *)passSnapshot;
- (void)setIsSnapshotFetchInProgress:(bool)arg1;
- (void)setPassSnapshot:(UIImage *)arg1;

@end

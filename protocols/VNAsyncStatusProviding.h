
@protocol VNAsyncStatusProviding

@required

- (VNAsyncStatus *)asyncStatus;
- (void)resetAsyncStatus;
- (void)setAsyncStatus:(bool)arg1 error:(NSError *)arg2;

@end

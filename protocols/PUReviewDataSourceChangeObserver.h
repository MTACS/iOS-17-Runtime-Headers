
@protocol PUReviewDataSourceChangeObserver <NSObject>

@required

- (void)reviewDataSourceDidChange:(PUReviewDataSource *)arg1 changeDetails:(PXArrayChangeDetails *)arg2;

@end

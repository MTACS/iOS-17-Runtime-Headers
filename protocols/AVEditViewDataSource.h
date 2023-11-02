
@protocol AVEditViewDataSource <NSObject>

@required

- (void)editView:(AVEditView *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2;
- (double)editViewDuration:(AVEditView *)arg1;
- (double)editViewThumbnailAspectRatio:(AVEditView *)arg1;

@end


@protocol AVEditViewDelegate <NSObject>

@required

- (void)editView:(AVEditView *)arg1 currentTimeDidChange:(double)arg2;
- (void)editView:(AVEditView *)arg1 trimEndTimeDidChange:(double)arg2;
- (void)editView:(AVEditView *)arg1 trimStartTimeDidChange:(double)arg2;
- (void)editViewDidBeginScrubbing:(AVEditView *)arg1;
- (void)editViewDidEndScrubbing:(AVEditView *)arg1;
- (void)editViewDidFinishRequestingThumbnails:(AVEditView *)arg1;
- (void)editViewWillBeginRequestingThumbnails:(AVEditView *)arg1;

@end

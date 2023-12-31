
@protocol PUPhotoCommentEntryViewDelegate <NSObject>

@required

- (void)photoCommentEntryViewDidEndEditing:(PUPhotoCommentEntryView *)arg1;
- (void)photoCommentEntryViewHeightDidChange:(PUPhotoCommentEntryView *)arg1;
- (void)photoCommentEntryViewWillBeginEditing:(PUPhotoCommentEntryView *)arg1;

@optional

- (void)photoCommentEntryViewDidBeginEditing:(PUPhotoCommentEntryView *)arg1;
- (bool)photoCommentEntryViewShouldEndEditing:(PUPhotoCommentEntryView *)arg1;

@end

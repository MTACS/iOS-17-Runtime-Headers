
@protocol PXCaptionHashtagsEntryViewDelegate <NSObject>

@required

- (void)captionHashtagsEntryViewDidBeginEditing:(PXCaptionHashtagsEntryView *)arg1;
- (void)captionHashtagsEntryViewDidEndEditing:(PXCaptionHashtagsEntryView *)arg1;
- (void)captionHashtagsEntryViewPreferredHeightDidChange:(PXCaptionHashtagsEntryView *)arg1;
- (void)captionHashtagsEntryViewRequestFocus:(PXCaptionHashtagsEntryView *)arg1;
- (bool)captionHashtagsEntryViewShouldBeginEditing:(PXCaptionHashtagsEntryView *)arg1;
- (bool)captionHashtagsEntryViewShouldEndEditing:(PXCaptionHashtagsEntryView *)arg1;
- (void)captionHashtagsEntryViewWillBeginEditing:(PXCaptionHashtagsEntryView *)arg1;

@end

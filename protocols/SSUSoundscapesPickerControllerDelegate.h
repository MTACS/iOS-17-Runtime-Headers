
@protocol SSUSoundscapesPickerControllerDelegate <NSObject>

@required

- (void)mediaPickerCancelled;
- (void)mediaPickerDidSelectPlaybackArchive:(MPPlaybackArchive *)arg1 withError:(NSError *)arg2;

@end


@protocol AVTPoseCaptureViewControllerDelegate <NSObject>

@required

- (void)poseCaptureViewController:(AVTPoseCaptureViewController *)arg1 didCapturePoseWithConfiguration:(AVTStickerConfiguration *)arg2 avatar:(id <AVTAvatarRecord>)arg3;
- (void)poseCaptureViewControllerDidCancel:(AVTPoseCaptureViewController *)arg1;

@optional

- (void)poseCaptureViewController:(void *)arg1 willCaptureAvatarImage:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: AVTPoseCaptureViewController *, UIImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*

@end

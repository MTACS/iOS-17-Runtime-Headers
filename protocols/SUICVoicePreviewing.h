
@protocol SUICVoicePreviewing <NSObject>

@required

- (<SUICVoicePreviewingDelegate> *)delegate;
- (void)previewVoice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AFVoiceInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDelegate:(id <SUICVoicePreviewingDelegate>)arg1;

@optional

- (void)stopVoicePreview;

@end

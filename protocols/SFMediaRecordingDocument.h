
@protocol SFMediaRecordingDocument <NSObject>

@required

- (NSString *)URLString;
- (bool)audioOnly;
- (bool)canOverrideStatusBar;
- (void)muteMediaCapture;
- (void)statusBarIndicatorTappedWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

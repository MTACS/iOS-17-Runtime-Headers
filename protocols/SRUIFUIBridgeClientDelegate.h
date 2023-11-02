
@protocol SRUIFUIBridgeClientDelegate <NSObject>

@required

- (void)duckTTSToVolume:(void *)arg1 rampTime:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: float, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)showAssetsDownloadNotificationPrompt;

@end

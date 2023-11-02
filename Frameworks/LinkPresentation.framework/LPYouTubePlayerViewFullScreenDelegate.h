
@interface LPYouTubePlayerViewFullScreenDelegate : NSObject <_WKFullscreenDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_webViewDidExitElementFullscreen:(id)arg1;
- (void)_webViewWillExitElementFullscreen:(id)arg1;

@end

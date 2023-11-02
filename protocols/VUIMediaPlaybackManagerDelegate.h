
@protocol VUIMediaPlaybackManagerDelegate <NSObject>

@required

- (void)mediaPlaybackManager:(void *)arg1 shouldHideUI:(void *)arg2 animated:(void *)arg3 animations:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 14: VUITransitionalPlaybackUIManager *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, bool, void*

@optional

- (void)evaluateSwipeUpMessageForMediaPlaybackManager:(VUITransitionalPlaybackUIManager *)arg1;
- (bool)mediaPlaybackManager:(VUITransitionalPlaybackUIManager *)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
- (bool)presentForegroundPlaybackControllerForMediaPlaybackManager:(VUITransitionalPlaybackUIManager *)arg1;

@end

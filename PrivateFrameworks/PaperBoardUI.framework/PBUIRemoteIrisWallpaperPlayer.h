
@interface PBUIRemoteIrisWallpaperPlayer : NSObject <PBUIIrisWallpaperPlaying, UIGestureRecognizerDelegate> {
    <PBUIRemoteIrisWallpaperPlayerDelegate> * _delegate;
    UILongPressGestureRecognizer * _gestureRecognizer;
    <PBUIIrisWallpaperPlayerDelegate> * _irisDelegate;
    long long  _irisPlaybackState;
    bool  _touchActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBUIRemoteIrisWallpaperPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PBUIIrisWallpaperPlayerDelegate> *irisDelegate;
@property (nonatomic, readonly) UIGestureRecognizer *irisGestureRecognizer;
@property (setter=_setIrisPlaybackState:, nonatomic) long long irisPlaybackState;
@property (nonatomic, readonly) bool isIrisInteracting;
@property (nonatomic, readonly) double stillTimeInVideo;
@property (readonly) Class superclass;
@property (getter=isTouchActive, setter=_setTouchActive:, nonatomic) bool touchActive;
@property (nonatomic, readonly, copy) NSURL *videoFileURL;

- (void).cxx_destruct;
- (void)_handleWallpaperGestureBegan;
- (void)_handleWallpaperGestureChanged;
- (void)_handleWallpaperGestureEnded;
- (void)_setIrisPlaybackState:(long long)arg1;
- (void)_setTouchActive:(bool)arg1;
- (void)_wallpaperGestureChanged:(id)arg1;
- (id)delegate;
- (id)init;
- (id)irisDelegate;
- (id)irisGestureRecognizer;
- (long long)irisPlaybackState;
- (bool)isIrisInteracting;
- (bool)isTouchActive;
- (void)setDelegate:(id)arg1;
- (void)setIrisDelegate:(id)arg1;
- (double)stillTimeInVideo;
- (id)videoFileURL;

@end

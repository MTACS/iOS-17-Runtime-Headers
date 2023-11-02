
@interface SCNUIKitSource : SCNImageSource {
    bool  _isOpaque;
    id  _uiView;
    id  _uiWindow;
    CALayer * _uiWindowLayer;
    bool  _windowPreparing;
}

@property (nonatomic, retain) UIView *uiView;
@property (nonatomic, retain) UIWindow *uiWindow;

- (void)dealloc;
- (id)init;
- (bool)isOpaque;
- (id)prepareWindowIfNeeded;
- (void)setUiView:(id)arg1;
- (void)setUiWindow:(id)arg1;
- (bool)supportsMetal;
- (id)textureSource;
- (id)uiView;
- (id)uiWindow;

@end

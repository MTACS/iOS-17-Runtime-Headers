
@interface EmojiPoster.EmojiForegroundSpiralLayersViewController : UIViewController {
    void _layoutProvider;
    void configuration;
    void deviceOrientation;
    void emojiImageViews;
    void emojiImages;
    void emojiRenderer;
    void emojiSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void shouldRotateEmojiWithDevice;
    void unlockProgress;
    void wakeProgress;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end

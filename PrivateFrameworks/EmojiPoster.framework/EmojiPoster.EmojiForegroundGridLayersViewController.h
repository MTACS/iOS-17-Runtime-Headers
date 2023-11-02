
@interface EmojiPoster.EmojiForegroundGridLayersViewController : UIViewController {
    void configuration;
    void configuredSize;
    void emojiImageViews;
    void emojiImages;
    void emojiRenderer;
    void layoutProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void numberOfItemsInRow;
    void numberOfRows;
    void unlockProgress;
    void wakeProgress;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

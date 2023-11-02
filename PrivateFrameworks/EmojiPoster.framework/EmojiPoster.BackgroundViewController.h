
@interface EmojiPoster.BackgroundViewController : UIViewController {
    void backgroundConfiguration;
    void backgroundIndex;
    void dimmingLayer;
    void unlockProgress;
    void usesDimmingLayer;
    void wakeProgress;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

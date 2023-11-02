
@interface AppleAccountUI.IconBubbleViewController : UIViewController <AAUIMicaPlayerDelegate> {
    void _timingModel;
    void contentView;
    void iconImages;
    void iconLayers;
    void isShowingAsset;
    void logoFillLayer;
    void logoLayer;
    void memojiContainerLayer;
    void memojiLayer;
    void memojiWrapperLayer;
    void player;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (void)AAUIMicaPlayerDidChangePlaybackTime:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

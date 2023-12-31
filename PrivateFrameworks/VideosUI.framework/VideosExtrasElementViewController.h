
@interface VideosExtrasElementViewController : UIViewController {
    VideosExtrasBackgroundViewController * _backgroundViewController;
    NSMapTable * _bannerButtonMap;
    bool  _wide;
}

@property (getter=isWide, nonatomic) bool wide;

+ (id)_borderView;

- (void).cxx_destruct;
- (void)_configureBannerWithElement:(id)arg1;
- (void)_didActivateButtonWithItem:(id)arg1;
- (id)_installBackdrop:(id)arg1;
- (void)_prepareLayout;
- (void)_startBackgroundAudio;
- (id)backgroundViewController;
- (void)configureBackgroundWithElements:(id)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (unsigned long long)extrasSize;
- (id)init;
- (bool)isWide;
- (void)setWide:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end

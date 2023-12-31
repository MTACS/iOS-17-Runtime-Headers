
@interface VideosExtrasGalleryTemplateViewController : VideosExtrasTemplateViewController {
    VideosExtrasBannerController * _bannerController;
    VideosExtrasGridElementViewController * _gridViewController;
    unsigned long long  _selectedItemIndex;
}

@property (nonatomic) unsigned long long selectedItemIndex;

- (void).cxx_destruct;
- (void)_prepareLayout;
- (id)contentScrollView;
- (unsigned long long)selectedItemIndex;
- (void)setSelectedItemIndex:(unsigned long long)arg1;
- (bool)showsPlaceholder;
- (id)templateElement;
- (void)viewDidLoad;

@end

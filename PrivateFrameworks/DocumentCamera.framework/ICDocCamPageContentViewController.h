
@interface ICDocCamPageContentViewController : UIViewController {
    UIImage * _image;
    UIImageView * _imageView;
    unsigned long long  _pageIndex;
    <ICDocCamPageContentViewTapDelegate> * _tapDelegate;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) <ICDocCamPageContentViewTapDelegate> *tapDelegate;

+ (double)leadingTrailingOffset:(long long)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (void)handleSingleTap:(id)arg1;
- (id)image;
- (id)imageView;
- (unsigned long long)pageIndex;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setTapDelegate:(id)arg1;
- (id)tapDelegate;
- (void)viewDidLoad;

@end

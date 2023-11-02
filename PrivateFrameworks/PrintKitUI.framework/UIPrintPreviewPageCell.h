
@interface UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    UIView * _checkmarkBackgroundImageView;
    UIView * _checkmarkImageView;
    UIView * _dimmingView;
    UIView * _loadingProgressView;
    long long  _pageCount;
    long long  _pageIndex;
    UILabel * _pageLabel;
    UIView * _pageLabelAndChekmarkView;
    UIView * _pageLabelBackgroundBlurView;
    <UIPrintPreviewDelegate> * _printPreviewDelegate;
    UIActivityIndicatorView * _spinner;
    UITapGestureRecognizer * _tapGestureRecognizer;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    UIImageView * _thumbnailView;
}

@property (nonatomic, retain) UIView *checkmarkBackgroundImageView;
@property (nonatomic, retain) UIView *checkmarkImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *loadingProgressView;
@property (nonatomic) long long pageCount;
@property (nonatomic) long long pageIndex;
@property (nonatomic, retain) UILabel *pageLabel;
@property (nonatomic, retain) UIView *pageLabelAndChekmarkView;
@property (nonatomic, retain) UIView *pageLabelBackgroundBlurView;
@property (nonatomic) <UIPrintPreviewDelegate> *printPreviewDelegate;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;
@property (nonatomic, retain) UIImageView *thumbnailView;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)addPageLabelAndImageView:(bool)arg1;
- (id)checkmarkBackgroundImageView;
- (id)checkmarkImageView;
- (id)dimmingView;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)loadingProgressView;
- (bool)locationInTapTargetOfPageLabelBadge:(struct CGPoint { double x1; double x2; })arg1;
- (void)pageBadgeTapped:(id)arg1;
- (long long)pageCount;
- (long long)pageIndex;
- (id)pageLabel;
- (id)pageLabelAndChekmarkView;
- (id)pageLabelBackgroundBlurView;
- (long long)pageLabelFormat;
- (id)pageLabelText:(long long)arg1;
- (void)prepareForReuse;
- (id)printPreviewDelegate;
- (void)setCheckmarkBackgroundImageView:(id)arg1;
- (void)setCheckmarkImageView:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setInRange:(bool)arg1 animated:(bool)arg2;
- (void)setLoadingProgressView:(id)arg1;
- (void)setPageCount:(long long)arg1;
- (void)setPageIndex:(long long)arg1;
- (void)setPageLabel:(id)arg1;
- (void)setPageLabelAndChekmarkView:(id)arg1;
- (void)setPageLabelBackgroundBlurView:(id)arg1;
- (void)setPrintPreviewDelegate:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnailView:(id)arg1;
- (void)showThumbnailProgressSpinner;
- (id)spinner;
- (id)tapGestureRecognizer;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (id)thumbnailView;

@end

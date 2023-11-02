
@interface PXCMMPosterHeaderView : UIView <PXChangeObserver> {
    PXGradientView * _bottomGradientView;
    PXCMMImageView * _imageView;
    long long  _presentationStyle;
    PXCMMPosterHeaderViewSpec * _spec;
    UIImageView * _statusCheckmark;
    UILabel * _statusLabel;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    PXGradientView * _topGradientView;
    PXCMMPosterHeaderViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXCMMPosterHeaderViewModel *viewModel;

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;
+ (void)preheatSharedValuesForPresentationStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_performLayoutWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateFonts;
- (void)_updateStatusString;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPresentationStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)presentationStyle;
- (void)setViewModel:(id)arg1;
- (bool)test_showStatusCheckmark;
- (id)test_statusString;
- (id)test_subtitle;
- (id)test_title;
- (id)viewModel;

@end

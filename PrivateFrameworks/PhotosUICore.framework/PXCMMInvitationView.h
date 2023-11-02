
@interface PXCMMInvitationView : UICollectionViewCell <PXChangeObserver> {
    <PXCMMInvitationViewDelegate> * _delegate;
    PXCMMPosterHeaderView * _headerView;
    PXRoundedCornerOverlayView * _roundedCornerOverlayView;
    UILabel * _subtitle1Label;
    UILabel * _subtitle2Label;
    UILabel * _titleLabel;
    PXCMMInvitationViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMInvitationViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } headerViewBounds;
@property (nonatomic, readonly) UIView *previewView;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXCMMInvitationViewModel *viewModel;

+ (struct CGSize { double x1; double x2; })posterHeaderViewSizeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (struct CGSize { double x1; double x2; })posterImageSizeThatFits:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 viewModel:(id)arg2;
+ (id)spec;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateHeaderView;
- (void)_updateOpaqueAncestorBackgroundColor;
- (bool)_updateSubtitle1;
- (bool)_updateSubtitle2;
- (bool)_updateTitle;
- (id)delegate;
- (id)focusEffect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headerViewBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)previewView;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)test_subtitle1;
- (id)test_subtitle2;
- (id)test_title;
- (id)viewModel;

@end

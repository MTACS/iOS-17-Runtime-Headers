
@interface PXPhotosGlobalFooterView : UICollectionReusableView <PXChangeObserver, UITextViewDelegate> {
    UIView * _accessoryView;
    PXFooterAnimatedIconView * _animatedIconView;
    PXGradientView * _backgroundView;
    double  _currentHeight;
    <PXPhotosGlobalFooterViewDelegate> * _delegate;
    struct { 
        bool photosGlobalFooterViewDidChangeHeight; 
        bool photosGlobalFooterViewDidMoveToWindow; 
    }  _delegateRespondsTo;
    UILabel * _extendedTitleLabel;
    UIView * _filterView;
    bool  _hasAnimatedIconView;
    UILabel * _internalMessageSubtitleLabel;
    bool  _isPerformingChanges;
    bool  _isPresentingAlert;
    <PXPhotosGlobalFooterViewLayoutDelegate> * _layoutDelegate;
    bool  _needsWorkaroundFor53118165;
    UIProgressView * _progressView;
    UITextView * _subtitle1TextView;
    UILabel * _subtitle2Label;
    UITextView * _subtitle2TextView;
    UILabel * _titleLabel;
    UIView * _topAccessoryView;
    PXFooterViewModel * _viewModel;
}

@property (nonatomic, readonly) double currentHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPhotosGlobalFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosGlobalFooterViewLayoutDelegate> *layoutDelegate;
@property (nonatomic, readonly) bool needsWorkaroundFor53118165;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXFooterViewModel *viewModel;

- (void).cxx_destruct;
- (void)_animatedIconCrossedGridCycleBoundary;
- (void)_configurePhotoCollectionGlobalFooterExtendedTitleLabel:(id)arg1;
- (void)_configurePhotoCollectionGlobalFooterInternalMessageSubtitleLabel:(id)arg1;
- (void)_configurePhotoCollectionGlobalFooterLabel:(id)arg1 withFont:(id)arg2 textColor:(id)arg3;
- (void)_configurePhotoCollectionGlobalFooterSubtitleLabel:(id)arg1;
- (void)_configurePhotoCollectionGlobalFooterTitleLabel:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_performActionFromView:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (bool)_shouldUseActionLinkInSubtitle1;
- (bool)_shouldUseActionLinkInSubtitle2;
- (void)_updateAccessory;
- (void)_updateAnimatedIcon;
- (void)_updateExtendedTitle;
- (void)_updateFilterView;
- (void)_updateInternalMessageSubtitle;
- (void)_updateProgressAnimated:(bool)arg1;
- (void)_updateSubtitle1;
- (void)_updateSubtitle2;
- (void)_updateTitle;
- (void)_updateTopAccessory;
- (double)currentHeight;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 needsWorkaroundFor53118165:(bool)arg2;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (bool)needsWorkaroundFor53118165;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)viewModel;

@end

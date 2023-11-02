
@interface PXMemoryView : UIView <PXChangeObserver> {
    PXDisplayAssetContentView * _displayAssetView;
    UIView * _highlightView;
    UIView * _overlayView;
    <PXMemoryViewPresentationDelegate> * _presentationDelegate;
    PXTitleSubtitleUILabel * _titleSubtitleLabel;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXMemoryViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXDisplayAssetContentView *displayAssetView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *highlightView;
@property (nonatomic, readonly) UIView *overlayView;
@property (nonatomic) <PXMemoryViewPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXTitleSubtitleUILabel *titleSubtitleLabel;
@property (nonatomic, retain) PXMemoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 applyToSubviews:(bool)arg2;
- (void)_updateHighlightedIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateKeyAssetIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateTitleSubtitleIfNeeded;
- (id)displayAssetView;
- (id)highlightView;
- (id)init;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)overlayView;
- (id)presentationDelegate;
- (void)setDisplayAssetView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleSubtitleLabel;
- (id)viewModel;

@end

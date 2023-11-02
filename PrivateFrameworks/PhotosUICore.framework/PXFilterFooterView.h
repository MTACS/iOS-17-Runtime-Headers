
@interface PXFilterFooterView : UIView {
    UILabel * _captionLabel;
    PXContentFilterState * _contentFilterState;
    <PXFilterFooterViewDelegate> * _delegate;
    UIButton * _filterButton;
    PXLibraryFilterState * _libraryFilterState;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
}

@property (nonatomic, retain) PXContentFilterState *contentFilterState;
@property (nonatomic) <PXFilterFooterViewDelegate> *delegate;
@property (nonatomic, retain) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, retain) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_showFilterUI:(id)arg1;
- (void)_updateDisplay;
- (id)contentFilterState;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)libraryFilterState;
- (void)setContentFilterState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLibraryFilterState:(id)arg1;
- (void)setSharedLibraryStatusProvider:(id)arg1;
- (id)sharedLibraryStatusProvider;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsCaption:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end


@interface SFFluidTabOverviewItemView : SFFluidTabOverviewReusableView {
    <SFFluidTabOverviewItemViewBorrowedContentProvider> * _borrowedContentProvider;
    UIView * _borrowedContentView;
    UIView * _borrowedContentViewContainer;
    double  _controlsAlpha;
    UIButton * _deleteButton;
    UIAction * _deleteButtonAction;
    NSArray * _deleteButtonConstraints;
    UIView * _highlightView;
    UILabel * _label;
    bool  _wantsBorrowedContentView;
}

@property (nonatomic) <SFFluidTabOverviewItemViewBorrowedContentProvider> *borrowedContentProvider;
@property (nonatomic, retain) UIView *borrowedContentView;
@property (nonatomic, readonly) double controlsAlpha;
@property (nonatomic, retain) UIAction *deleteButtonAction;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) bool wantsBorrowedContentView;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)borrowedContentProvider;
- (id)borrowedContentView;
- (double)controlsAlpha;
- (id)deleteButtonAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setBorrowedContentProvider:(id)arg1;
- (void)setBorrowedContentView:(id)arg1;
- (void)setDeleteButtonAction:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (bool)wantsBorrowedContentView;

@end

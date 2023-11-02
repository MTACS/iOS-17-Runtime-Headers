
@interface VUICollectionHeaderView : UICollectionReusableView {
    UIButton * _headerButton;
    _TVImageView * _imageView;
    VUICollectionHeaderViewLayout * _layout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    id /* block */  _selectionHandler;
    VUISeparatorView * _separatorView;
    VUILabel * _subtitleTextView;
    VUILabel * _titleTextView;
}

@property (nonatomic, retain) UIButton *headerButton;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) VUICollectionHeaderViewLayout *layout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, retain) VUILabel *subtitleTextView;
@property (nonatomic, retain) VUILabel *titleTextView;

+ (id)configureCollectionHeaderViewWithTitle:(id)arg1 subtitle:(id)arg2 buttonString:(id)arg3 existingView:(id)arg4;

- (void).cxx_destruct;
- (id)_buttonWithString:(id)arg1 existingButton:(id)arg2;
- (struct CGSize { double x1; double x2; })_layoutWithSize:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (void)_selectButtonAction:(id)arg1;
- (id)headerButton;
- (id)imageView;
- (id)layout;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id /* block */)selectionHandler;
- (id)separatorView;
- (void)setHeaderButton:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSubtitleTextView:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleTextView;
- (void)tintColorDidChange;
- (id)titleTextView;

@end


@interface VUIDownloadShowTableHeaderView : UITableViewHeaderFooterView {
    NSString * _buttonTitle;
    UIButton * _headerButton;
    NSString * _headerTitle;
    id /* block */  _selectionHandler;
    VUISeparatorView * _separatorView;
    VUILabel * _titleLabel;
}

@property (nonatomic, retain) NSString *buttonTitle;
@property (nonatomic, retain) UIButton *headerButton;
@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, retain) VUILabel *titleLabel;

- (void).cxx_destruct;
- (id)_buttonWithString:(id)arg1 existingButton:(id)arg2;
- (struct CGSize { double x1; double x2; })_layoutWithSize:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (void)_selectButtonAction:(id)arg1;
- (id)buttonTitle;
- (id)headerButton;
- (id)headerTitle;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id /* block */)selectionHandler;
- (id)separatorView;
- (void)setButtonTitle:(id)arg1;
- (void)setHeaderButton:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end


@interface EKUIPopupTableViewCell : EKUITableViewCell {
    NSArray * _constraints;
    UIButton * _popupButton;
    bool  _showSelectedImage;
    UILabel * _textLabel;
    bool  _titleStrikethrough;
}

@property (nonatomic, copy) UIMenu *popupMenu;
@property (nonatomic, copy) id /* block */ popupMenuProvider;
@property (nonatomic) bool showSelectedImage;
@property (nonatomic) bool titleStrikethrough;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)popupMenu;
- (id /* block */)popupMenuProvider;
- (void)setPopupMenu:(id)arg1;
- (void)setPopupMenuProvider:(id /* block */)arg1;
- (void)setShowSelectedImage:(bool)arg1;
- (void)setTitleStrikethrough:(bool)arg1;
- (bool)showSelectedImage;
- (id)textLabel;
- (bool)titleStrikethrough;
- (void)traitCollectionDidChange:(id)arg1;

@end

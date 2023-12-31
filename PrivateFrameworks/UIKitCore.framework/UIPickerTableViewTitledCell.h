
@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {
    bool  _isAttributed;
    UIColor * _textColor;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) bool _isAttributed;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (bool)_canBeReusedInPickerView;
- (bool)_isAttributed;
- (void)_setIsCenterCell:(bool)arg1 shouldModifyAlphaOfView:(bool)arg2;
- (id)_titleLabel;
- (id)attributedTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 textColor:(id)arg3 forceTextAlignmentCentered:(bool)arg4;
- (void)prepareForReuse;
- (void)setAttributedTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

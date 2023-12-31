
@interface TKPickerTableViewCell : UITableViewCell {
    bool  _shouldTintTextLabel;
    UIColor * _textLabelColor;
}

@property (nonatomic) bool shouldTintTextLabel;
@property (nonatomic, retain) UIColor *textLabelColor;

- (void).cxx_destruct;
- (void)_updateTextLabelColor;
- (void)setSectionLocation:(int)arg1 animated:(bool)arg2;
- (void)setShouldTintTextLabel:(bool)arg1;
- (void)setTextLabelColor:(id)arg1;
- (bool)shouldTintTextLabel;
- (id)textLabelColor;
- (void)tintColorDidChange;

@end

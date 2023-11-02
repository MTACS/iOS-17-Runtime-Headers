
@interface _UIActivityActionCellTitleLabel : UILabel {
    NSString * _textStyle;
}

@property (nonatomic, retain) NSString *textStyle;

- (void).cxx_destruct;
- (void)_updateFontWithSizeCategory:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 sizeCategory:(id)arg2;
- (id)textStyle;
- (void)traitCollectionDidChange:(id)arg1;

@end

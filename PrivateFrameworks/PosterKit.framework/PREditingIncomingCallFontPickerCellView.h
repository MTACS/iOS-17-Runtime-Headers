
@interface PREditingIncomingCallFontPickerCellView : PREditingFontPickerCellView {
    UIView * _contentView;
}

@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (void)configureWithFont:(id)arg1 text:(id)arg2;
- (id)contentView;
- (void)displayImage:(id)arg1;
- (void)displayText:(id)arg1 usingFont:(id)arg2;
- (unsigned short)glyphForText:(id)arg1 usingFontRef:(struct __CTFont { }*)arg2;
- (id)imageFromGlyph:(unsigned short)arg1 fromFontRef:(struct __CTFont { }*)arg2;
- (id)imageRepresentingFont:(id)arg1 text:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end

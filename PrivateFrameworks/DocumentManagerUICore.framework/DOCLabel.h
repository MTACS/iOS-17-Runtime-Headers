
@interface DOCLabel : UILabel <DOCLabelSizing> {
    bool  _intrinsicContentSizeShortcutDisabled;
    NSNumber * useAttributedTextNumber;
}

@property (readonly) struct CGSize { double x1; double x2; } doc_effectiveContentSize;

- (void).cxx_destruct;
- (bool)_useShortcutIntrinsicContentSize;
- (void)doc_commonInit;
- (struct CGSize { double x1; double x2; })doc_effectiveContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)updateForChangedTraitsAffectingFonts;

@end

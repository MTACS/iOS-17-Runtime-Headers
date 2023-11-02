
@interface TLKTextView : UITextView {
    bool  _automaticUrlification;
    TLKMultilineText * _multilineText;
    unsigned long long  _prominence;
}

@property (nonatomic) bool automaticUrlification;
@property (nonatomic, retain) TLKMultilineText *multilineText;
@property (nonatomic) unsigned long long prominence;

- (void).cxx_destruct;
- (bool)allowsVibrancy;
- (bool)automaticUrlification;
- (void)didMoveToWindow;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)loadInlineImages;
- (id)multilineText;
- (unsigned long long)prominence;
- (void)setAutomaticUrlification:(bool)arg1;
- (void)setMultilineText:(id)arg1;
- (void)setProminence:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAttributedString;
- (void)urlify;

@end

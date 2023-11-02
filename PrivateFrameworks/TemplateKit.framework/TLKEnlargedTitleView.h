
@interface TLKEnlargedTitleView : TLKView {
    TLKMultilineText * _subtitle;
    TLKLabel * _subtitleLabel;
    TLKMultilineText * _title;
    TLKLabel * _titleLabel;
}

@property (nonatomic, retain) TLKMultilineText *subtitle;
@property (nonatomic, retain) TLKLabel *subtitleLabel;
@property (nonatomic, retain) TLKMultilineText *title;
@property (nonatomic, retain) TLKLabel *titleLabel;

- (void).cxx_destruct;
- (void)observedPropertiesChanged;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (id)subtitle;
- (id)subtitleLabel;
- (id)subtitleLabelText;
- (id)title;
- (id)titleLabel;
- (id)titleLabelText;

@end

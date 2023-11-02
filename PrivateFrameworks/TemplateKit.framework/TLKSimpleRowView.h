
@interface TLKSimpleRowView : TLKView <NUIContainerViewDelegate> {
    TLKImage * _leadingImage;
    TLKImageView * _leadingImageView;
    TLKRichText * _leadingSubtitle;
    TLKLabel * _leadingSubtitleLabel;
    TLKRichText * _leadingTitle;
    TLKLabel * _leadingTitleLabel;
    TLKImage * _trailingImage;
    TLKImageView * _trailingImageView;
    TLKRichText * _trailingSubtitle;
    TLKLabel * _trailingSubtitleLabel;
    TLKRichText * _trailingTitle;
    TLKLabel * _trailingTitleLabel;
}

@property (nonatomic, retain) NUIContainerGridView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKImage *leadingImage;
@property (nonatomic, retain) TLKImageView *leadingImageView;
@property (nonatomic, retain) TLKRichText *leadingSubtitle;
@property (nonatomic, retain) TLKLabel *leadingSubtitleLabel;
@property (nonatomic, retain) TLKRichText *leadingTitle;
@property (nonatomic, retain) TLKLabel *leadingTitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKImage *trailingImage;
@property (nonatomic, retain) TLKImageView *trailingImageView;
@property (nonatomic, retain) TLKRichText *trailingSubtitle;
@property (nonatomic, retain) TLKLabel *trailingSubtitleLabel;
@property (nonatomic, retain) TLKRichText *trailingTitle;
@property (nonatomic, retain) TLKLabel *trailingTitleLabel;

+ (void)applyText:(id)arg1 toLabel:(id)arg2;
+ (double)naturalWidthOfLabel:(id)arg1 inFittingSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)bottomRowViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)fontForTextInLabel:(id)arg1;
- (id)gridOfAllViews;
- (bool)hasSubtitles;
- (id)leadingImage;
- (id)leadingImageView;
- (id)leadingSubtitle;
- (id)leadingSubtitleLabel;
- (id)leadingSubtitleLabelString;
- (id)leadingTextView;
- (id)leadingTitle;
- (id)leadingTitleLabel;
- (id)leadingTitleLabelFont;
- (id)leadingTitleLabelString;
- (void)observedPropertiesChanged;
- (void)setLeadingImage:(id)arg1;
- (void)setLeadingImageView:(id)arg1;
- (void)setLeadingSubtitle:(id)arg1;
- (void)setLeadingSubtitleLabel:(id)arg1;
- (void)setLeadingTitle:(id)arg1;
- (void)setLeadingTitleLabel:(id)arg1;
- (void)setTrailingImage:(id)arg1;
- (void)setTrailingImageView:(id)arg1;
- (void)setTrailingSubtitle:(id)arg1;
- (void)setTrailingSubtitleLabel:(id)arg1;
- (void)setTrailingTitle:(id)arg1;
- (void)setTrailingTitleLabel:(id)arg1;
- (id)setupContentView;
- (id)stringForLabel:(id)arg1;
- (id)topRowViews;
- (id)trailingImage;
- (id)trailingImageView;
- (id)trailingSubtitle;
- (id)trailingSubtitleLabel;
- (id)trailingSubtitleLabelFont;
- (id)trailingSubtitleLabelString;
- (id)trailingTitle;
- (id)trailingTitleLabel;
- (id)trailingTitleLabelFont;
- (id)trailingTitleLabelString;
- (bool)usesDefaultLayoutMargins;
- (double)widthOfColumnAtIndex:(unsigned long long)arg1;

@end

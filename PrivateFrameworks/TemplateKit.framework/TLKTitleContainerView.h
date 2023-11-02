
@interface TLKTitleContainerView : TLKStackView {
    TLKImageView * _secondaryImageView;
    NUIContainerBoxView * _secondaryImageViewBoxView;
    TLKLabel * _secondaryLabel;
    TLKRichTextField * _titleField;
}

@property (nonatomic, retain) TLKImageView *secondaryImageView;
@property (nonatomic, retain) NUIContainerBoxView *secondaryImageViewBoxView;
@property (nonatomic, retain) TLKLabel *secondaryLabel;
@property (nonatomic, retain) TLKRichTextField *titleField;

+ (bool)hasNonBoldFormattingInRichText:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)secondaryImageView;
- (id)secondaryImageViewBoxView;
- (id)secondaryLabel;
- (id)secondaryTitleLabelString;
- (void)setSecondaryImageView:(id)arg1;
- (void)setSecondaryImageViewBoxView:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setTitleField:(id)arg1;
- (id)titleField;
- (id)titleFont;
- (id)titleLabel;
- (id)titleLabelString;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(bool)arg4 useCompactMode:(bool)arg5 truncateMiddle:(bool)arg6;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

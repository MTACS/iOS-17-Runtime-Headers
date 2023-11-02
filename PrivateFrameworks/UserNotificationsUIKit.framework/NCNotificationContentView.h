
@interface NCNotificationContentView : UIView <NCNotificationContentDisplaying, UITextViewDelegate> {
    UIView * _accessoryView;
    bool  _adjustsFontForContentSizeCategory;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIView * _contentView;
    <NCNotificationContentViewDelegate> * _delegate;
    NSStringDrawingContext * _drawingContext;
    BSUIFontProvider * _fontProvider;
    bool  _hasUpdatedContent;
    long long  _lookStyle;
    unsigned long long  _maximumNumberOfPrimaryLargeTextLines;
    unsigned long long  _maximumNumberOfPrimaryTextLines;
    unsigned long long  _maximumNumberOfSecondaryLargeTextLines;
    unsigned long long  _maximumNumberOfSecondaryTextLines;
    NSString * _preferredContentSizeCategory;
    UILabel * _primaryLabel;
    UILabel * _primarySubtitleLabel;
    bool  _screenCaptureProhibited;
    UILabel * _secondaryLabel;
    UITextView * _secondaryTextView;
    BSUIEmojiLabelView * _summaryLabel;
    UIImageView * _thumbnailImageView;
    bool  _thumbnailIsContactImage;
    bool  _useSmallTopMargin;
    MTVisualStylingProvider * _visualStylingProvider;
    NSMutableDictionary * _widthToFontToStringToMeasuredNumLines;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool alignContentToBottom;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BSUIFontProvider *fontProvider;
@property (nonatomic, copy) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSAttributedString *importantAttributedText;
@property (nonatomic, copy) NSString *importantText;
@property (nonatomic, readonly, copy) UIImageConfiguration *importantTextImageConfiguration;
@property (nonatomic, copy) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (nonatomic, copy) UIAction *inlineAction;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (getter=_primaryLabel, setter=_setPrimaryLabel:, nonatomic, retain) UILabel *primaryLabel;
@property (getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:, nonatomic, retain) UILabel *primarySubtitleLabel;
@property (nonatomic, copy) NSString *primarySubtitleText;
@property (nonatomic) unsigned long long primarySubtitleTextMaximumNumberOfLines;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic) unsigned long long primaryTextMaximumNumberOfLines;
@property (nonatomic, copy) UIImage *prominentIcon;
@property (nonatomic, copy) UIView *prominentIconView;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic) bool screenCaptureProhibited;
@property (getter=_secondaryLabel, nonatomic, readonly) UILabel *secondaryLabel;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic) unsigned long long secondaryTextMaximumNumberOfLines;
@property (getter=_secondaryTextView, nonatomic, readonly) UITextView *secondaryTextView;
@property (nonatomic, copy) UIImage *subordinateIcon;
@property (getter=_summaryLabel, setter=_setSummaryLabel:, nonatomic, retain) BSUIEmojiLabelView *summaryLabel;
@property (nonatomic, copy) NSString *summaryText;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIImage *thumbnail;
@property (getter=isThumbnailContactImage, nonatomic) bool thumbnailIsContactImage;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic) bool useSmallTopMargin;

- (void).cxx_destruct;
- (unsigned long long)_cachedNumberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3 scale:(double)arg4;
- (void)_clearCacheForFont:(id)arg1;
- (void)_configureTextSupportingView:(id)arg1;
- (void)_configureThumbnailAsContactImage:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsForLongLook;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsForShortLook;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsForStyle:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForThumbnailInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContentViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_invalidateNumberOfLinesCache;
- (void)_layoutSubviews;
- (id)_lazyPrimaryLabel;
- (id)_lazyPrimarySubtitleLabel;
- (id)_lazySecondaryLabel;
- (id)_lazySecondaryTextSupportingView;
- (id)_lazySecondaryTextView;
- (id)_lazySummaryLabel;
- (id)_lazyThumbnailImageView;
- (id)_newPrimaryLabel;
- (id)_newSecondaryLabel;
- (id)_newSecondaryTextView;
- (id)_newSummaryLabel;
- (unsigned long long)_numberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forSize:(struct CGSize { double x1; double x2; })arg3;
- (id)_primaryLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_primaryLabelBoundsForSize:(struct CGSize { double x1; double x2; })arg1 withContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 andNumberOfLines:(unsigned long long)arg3;
- (id)_primarySubtitleLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_primarySubtitleLabelBoundsForSize:(struct CGSize { double x1; double x2; })arg1 withContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 andNumberOfLines:(unsigned long long)arg3;
- (double)_primarySubtitleTextBaselineOffsetForCurrentStyle;
- (unsigned long long)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2;
- (unsigned long long)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;
- (double)_primaryTextBaselineOffsetForCurrentStyle;
- (double)_primaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (unsigned long long)_primaryTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2;
- (unsigned long long)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;
- (id)_secondaryLabel;
- (double)_secondaryTextBaselineOffsetForCurrentStyle;
- (double)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(double)arg1;
- (double)_secondaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (unsigned long long)_secondaryTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2;
- (unsigned long long)_secondaryTextNumberOfLines;
- (unsigned long long)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;
- (id)_secondaryTextSupportingView;
- (id)_secondaryTextView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_secondaryTextViewBoundsForSize:(struct CGSize { double x1; double x2; })arg1 withContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 andNumberOfLines:(unsigned long long)arg3;
- (void)_setPrimaryLabel:(id)arg1;
- (void)_setPrimarySubtitleLabel:(id)arg1;
- (void)_setSummaryLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)_summaryLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_summaryLabelBoundsForSize:(struct CGSize { double x1; double x2; })arg1 withContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 andNumberOfLines:(unsigned long long)arg3;
- (double)_summaryTextBaselineOffsetForCurrentStyle;
- (double)_summaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (unsigned long long)_summaryTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2;
- (unsigned long long)_summaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;
- (void)_updateContentInsets;
- (void)_updateContentModeForThumbnailImage:(id)arg1;
- (void)_updateStyleForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_updateStyleForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2;
- (void)_updateStyleForSummaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_updateStyleForThumbnailImage:(id)arg1 withStyle:(long long)arg2;
- (void)_updateTextAttributesForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_updateTextAttributesForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2;
- (void)_updateTextAttributesForSummaryLabel:(id)arg1 withStyle:(long long)arg2;
- (id)accessoryView;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)debugDescription;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)fontProvider;
- (id)initWithStyle:(long long)arg1;
- (bool)isThumbnailContactImage;
- (void)layoutSubviews;
- (unsigned long long)maximumNumberOfPrimaryLargeTextLines;
- (unsigned long long)maximumNumberOfPrimaryTextLines;
- (unsigned long long)maximumNumberOfSecondaryLargeTextLines;
- (unsigned long long)maximumNumberOfSecondaryTextLines;
- (id)preferredContentSizeCategory;
- (id)primarySubtitleText;
- (unsigned long long)primarySubtitleTextMaximumNumberOfLines;
- (id)primaryText;
- (unsigned long long)primaryTextMaximumNumberOfLines;
- (id)requiredVisualStyleCategories;
- (bool)screenCaptureProhibited;
- (id)secondaryText;
- (unsigned long long)secondaryTextMaximumNumberOfLines;
- (void)setAccessoryView:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFontProvider:(id)arg1;
- (void)setMaximumNumberOfPrimaryLargeTextLines:(unsigned long long)arg1;
- (void)setMaximumNumberOfPrimaryTextLines:(unsigned long long)arg1;
- (void)setMaximumNumberOfSecondaryLargeTextLines:(unsigned long long)arg1;
- (void)setMaximumNumberOfSecondaryTextLines:(unsigned long long)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimarySubtitleTextMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setScreenCaptureProhibited:(bool)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSecondaryTextMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setSummaryText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailIsContactImage:(bool)arg1;
- (void)setUseSmallTopMargin:(bool)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)summaryText;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)thumbnail;
- (double)topMarginToPrimaryLabelForCurrentStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useSmallTopMargin;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
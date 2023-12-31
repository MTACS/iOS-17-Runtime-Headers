
@interface NCNotificationSeamlessContentView : UIView <BSUIDateLabelDelegate, NCNotificationContentDisplaying, UITextViewDelegate> {
    bool  _URLInteractionEnabled;
    bool  _adjustsFontForContentSizeCategory;
    bool  _alignContentToBottom;
    NCBadgedIconView * _badgedIconView;
    UIView * _crossfadingContentView;
    NSDate * _date;
    bool  _dateAllDay;
    long long  _dateFormatStyle;
    UILabel<BSUIDateLabel> * _dateLabel;
    <NCNotificationSeamlessContentViewDelegate> * _delegate;
    UILabel * _footerTextLabel;
    bool  _hasUpdatedContent;
    bool  _horizontalMarginPaddingDisabled;
    UILabel * _importantTextLabel;
    MTVisualStylingProvider * _importantTextVisualStylingProvider;
    UIAction * _inlineAction;
    UIButton * _inlineActionButton;
    NSString * _preferredContentSizeCategory;
    UILabel * _primarySubtitleTextLabel;
    unsigned long long  _primarySubtitleTextMaximumNumberOfLines;
    UILabel * _primaryTextLabel;
    unsigned long long  _primaryTextMaximumNumberOfLines;
    bool  _screenCaptureProhibited;
    UIView<NCTextSupporting> * _secondaryTextElement;
    unsigned long long  _secondaryTextMaximumNumberOfLines;
    MTVisualStylingProvider * _strokeVisualStylingProvider;
    BSUIEmojiLabelView * _summaryTextLabel;
    bool  _textMenusEnabled;
    bool  _thumbnailAlignedWithSecondaryText;
    UIImageView * _thumbnailImageView;
    NSTimeZone * _timeZone;
    bool  _truncatingSecondaryText;
}

@property (getter=isURLInteractionEnabled, nonatomic) bool URLInteractionEnabled;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool alignContentToBottom;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationSeamlessContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BSUIFontProvider *fontProvider;
@property (nonatomic, copy) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (getter=isHorizontalMarginPaddingDisabled, nonatomic) bool horizontalMarginPaddingDisabled;
@property (nonatomic, copy) NSAttributedString *importantAttributedText;
@property (nonatomic, copy) NSString *importantText;
@property (nonatomic, readonly, copy) UIImageConfiguration *importantTextImageConfiguration;
@property (nonatomic, copy) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (nonatomic, copy) UIAction *inlineAction;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *primarySubtitleText;
@property (nonatomic) unsigned long long primarySubtitleTextMaximumNumberOfLines;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic) unsigned long long primaryTextMaximumNumberOfLines;
@property (nonatomic, copy) UIImage *prominentIcon;
@property (nonatomic, copy) UIView *prominentIconView;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic) bool screenCaptureProhibited;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic) unsigned long long secondaryTextMaximumNumberOfLines;
@property (nonatomic, copy) UIImage *subordinateIcon;
@property (nonatomic, copy) NSString *summaryText;
@property (readonly) Class superclass;
@property (getter=areTextMenusEnabled, nonatomic) bool textMenusEnabled;
@property (nonatomic, copy) UIImage *thumbnail;
@property (getter=isThumbnailAlignedWithSecondaryText, nonatomic) bool thumbnailAlignedWithSecondaryText;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (getter=isTruncatingSecondaryText, nonatomic, readonly) bool truncatingSecondaryText;

+ (id)_preferredFont:(bool)arg1 textStyle:(id)arg2 weight:(double)arg3 additionalTraits:(unsigned int)arg4;

- (void).cxx_destruct;
- (void)_adjustInlineActionButtonBackgroundColor;
- (void)_configureBadgeIconViewIfNecessary;
- (void)_configureCrossfadingContentViewIfNecessary;
- (void)_configureDateLabel;
- (void)_configureDateLabelIfNecessary;
- (void)_configureImportantTextLabelIfNecessary;
- (void)_configureSecondaryLabelIfNecessary;
- (void)_configureSecondaryTextElementIfNecessary;
- (void)_configureSecondaryTextViewIfNecessary;
- (id)_dateLabelFont;
- (id)_dateLabelPreferredFont;
- (unsigned long long)_footerTextMaximumNumberOfLines;
- (unsigned long long)_importantTextMaximumNumberOfLines;
- (void)_layoutSubviewInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 measuringOnly:(out struct CGSize { double x1; double x2; }*)arg2;
- (bool)_needsTextAttributesUpdate;
- (id)_prominentIconImageView;
- (void)_recycleDateLabel;
- (void)_setNeedsTextAttributesUpdate;
- (id)_subordinateIconImageBrandingBadge;
- (void)_tearDownDateLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForDateLabel;
- (void)_updateTextAttributesForFooterTextLabel;
- (void)_updateTextAttributesForImportantTextLabel;
- (void)_updateTextAttributesForInlineActionButton;
- (void)_updateTextAttributesForPrimarySubtitleTextLabel;
- (void)_updateTextAttributesForPrimaryTextLabel;
- (void)_updateTextAttributesForSecondaryTextElement;
- (void)_updateTextAttributesIfNecessary;
- (void)_updateVisualStylingOfImageView:(id)arg1 ifSymbolImageWithStyle:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (bool)alignContentToBottom;
- (bool)areTextMenusEnabled;
- (id)date;
- (long long)dateFormatStyle;
- (void)dateLabelDidChange:(id)arg1;
- (id)delegate;
- (void)didMoveToWindow;
- (id)footerText;
- (id)importantAttributedText;
- (id)importantText;
- (id)importantTextImageConfiguration;
- (id)importantTextVisualStylingProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inlineAction;
- (bool)isDateAllDay;
- (bool)isHorizontalMarginPaddingDisabled;
- (bool)isThumbnailAlignedWithSecondaryText;
- (bool)isTruncatingSecondaryText;
- (bool)isURLInteractionEnabled;
- (void)layoutSubviews;
- (id)preferredContentSizeCategory;
- (id)primarySubtitleText;
- (unsigned long long)primarySubtitleTextMaximumNumberOfLines;
- (id)primaryText;
- (unsigned long long)primaryTextMaximumNumberOfLines;
- (id)prominentIcon;
- (id)prominentIconView;
- (id)requiredVisualStyleCategories;
- (bool)screenCaptureProhibited;
- (id)secondaryText;
- (unsigned long long)secondaryTextMaximumNumberOfLines;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAlignContentToBottom:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setHorizontalMarginPaddingDisabled:(bool)arg1;
- (void)setImportantAttributedText:(id)arg1;
- (void)setImportantText:(id)arg1;
- (void)setImportantTextVisualStylingProvider:(id)arg1;
- (void)setInlineAction:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimarySubtitleTextMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setProminentIcon:(id)arg1;
- (void)setProminentIconView:(id)arg1;
- (void)setScreenCaptureProhibited:(bool)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSecondaryTextMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setSubordinateIcon:(id)arg1;
- (void)setTextMenusEnabled:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailAlignedWithSecondaryText:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setURLInteractionEnabled:(bool)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subordinateIcon;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)thumbnail;
- (id)timeZone;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end

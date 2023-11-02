
@interface SFDetailedRowCardSection : SFCardSection <NSCopying, NSSecureCoding, SFDetailedRowCardSection> {
    SFActionItem * _action;
    SFButton * _button;
    NSArray * _buttonItems;
    bool  _buttonItemsAreTrailing;
    NSArray * _descriptions;
    SFRichText * _footnote;
    struct { 
        unsigned int preventThumbnailImageScaling : 1; 
        unsigned int isSecondaryTitleDetached : 1; 
        unsigned int shouldUseCompactDisplay : 1; 
        unsigned int buttonItemsAreTrailing : 1; 
    }  _has;
    bool  _isSecondaryTitleDetached;
    bool  _preventThumbnailImageScaling;
    SFRichText * _richTrailingBottomText;
    SFRichText * _richTrailingMiddleText;
    SFRichText * _richTrailingTopText;
    SFFormattedText * _secondaryTitle;
    SFImage * _secondaryTitleImage;
    bool  _shouldUseCompactDisplay;
    SFImage * _thumbnail;
    SFRichText * _title;
    SFRichText * _topText;
    SFFormattedText * _trailingBottomText;
    SFFormattedText * _trailingMiddleText;
    SFImage * _trailingThumbnail;
    SFFormattedText * _trailingTopText;
    NSString * _type;
}

@property (nonatomic, retain) SFActionItem *action;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic, retain) SFButton *button;
@property (nonatomic, copy) NSArray *buttonItems;
@property (nonatomic) bool buttonItemsAreTrailing;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *descriptions;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic, retain) SFRichText *footnote;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool isSecondaryTitleDetached;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leadingSwipeButtonItems;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic) bool preventThumbnailImageScaling;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (nonatomic, retain) NSString *previewButtonItemsTitle;
@property (nonatomic, retain) SFCommand *previewCommand;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic, retain) SFRichText *richTrailingBottomText;
@property (nonatomic, retain) SFRichText *richTrailingMiddleText;
@property (nonatomic, retain) SFRichText *richTrailingTopText;
@property (nonatomic, retain) SFFormattedText *secondaryTitle;
@property (nonatomic, retain) SFImage *secondaryTitleImage;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (nonatomic) bool shouldUseCompactDisplay;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFImage *thumbnail;
@property (nonatomic, retain) SFRichText *title;
@property (nonatomic, retain) SFRichText *topText;
@property (nonatomic, retain) SFFormattedText *trailingBottomText;
@property (nonatomic, retain) SFFormattedText *trailingMiddleText;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, retain) SFImage *trailingThumbnail;
@property (nonatomic, retain) SFFormattedText *trailingTopText;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)button;
- (id)buttonItems;
- (bool)buttonItemsAreTrailing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptions;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)footnote;
- (bool)hasButtonItemsAreTrailing;
- (bool)hasIsSecondaryTitleDetached;
- (bool)hasPreventThumbnailImageScaling;
- (bool)hasShouldUseCompactDisplay;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSecondaryTitleDetached;
- (id)jsonData;
- (bool)preventThumbnailImageScaling;
- (id)richTrailingBottomText;
- (id)richTrailingMiddleText;
- (id)richTrailingTopText;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (void)setAction:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setButtonItemsAreTrailing:(bool)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setRichTrailingBottomText:(id)arg1;
- (void)setRichTrailingMiddleText:(id)arg1;
- (void)setRichTrailingTopText:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setShouldUseCompactDisplay:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopText:(id)arg1;
- (void)setTrailingBottomText:(id)arg1;
- (void)setTrailingMiddleText:(id)arg1;
- (void)setTrailingThumbnail:(id)arg1;
- (void)setTrailingTopText:(id)arg1;
- (void)setType:(id)arg1;
- (bool)shouldUseCompactDisplay;
- (id)thumbnail;
- (id)title;
- (id)topText;
- (id)trailingBottomText;
- (id)trailingMiddleText;
- (id)trailingThumbnail;
- (id)trailingTopText;
- (id)type;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIHorizontalViewClass;
- (Class)_searchUIHorizontallyScrollingButtonControllerClass;
- (Class)_searchUIViewClass;
- (double)_superGroupSpacing;
- (bool)_wantsHeaderSeparator;
- (double)searchUIHorizontallyScrollingSectionModel_widthDimensionMultiplier;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (bool)_SUICKPInteractiveCardSectionViewController_shouldHandlePunchout;
- (bool)_SUICKPInteractiveCardSectionViewController_shouldRenderButtonOverlay;

@end


@interface SFCardSection : NSObject <CRCardSection, NSCopying, SFCardSection, SFJSONSerializable> {
    SFColor * _backgroundColor;
    bool  _canBeHidden;
    NSString * _cardSectionDetail;
    NSString * _cardSectionId;
    SFCommand * _command;
    NSString * _commandDetail;
    NSArray * _commands;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _hideDivider;
    NSArray * _leadingSwipeButtonItems;
    SFCard * _nextCard;
    NSArray * _parameterKeyPaths;
    NSArray * _previewButtonItems;
    NSString * _previewButtonItemsTitle;
    SFCommand * _previewCommand;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    NSString * _resultIdentifier;
    int  _separatorStyle;
    bool  _shouldHideInAmbientMode;
    NSArray * _trailingSwipeButtonItems;
    NSString * _type;
    SFUserReportRequest * _userReportRequest;
}

@property (nonatomic, readonly) NSArray *actionCommands;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic, readonly) <SFCardSection> *backingCardSection;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, readonly) NSString *cardSectionIdentifier;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic, readonly) bool hasNextCard;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leadingSwipeButtonItems;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (nonatomic, retain) NSString *previewButtonItemsTitle;
@property (nonatomic, retain) SFCommand *previewCommand;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic, readonly) NSArray *sectionsWithCards;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (nonatomic, retain) SFSearchResult_SpotlightExtras *spotlightBackingResult;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCardsFromButtonsTo:(id)arg1;
- (void)addCardsFromCommandsTo:(id)arg1;
- (void)addCardsFromEmbeddedSectionsTo:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (id)cardSectionDetail;
- (id)cardSectionId;
- (id)command;
- (id)commandDetail;
- (id)commands;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)embeddedCards;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (bool)hideDivider;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)leadingSwipeButtonItems;
- (id)nextCard;
- (id)parameterKeyPaths;
- (id)previewButtonItems;
- (id)previewButtonItemsTitle;
- (id)previewCommand;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (id)resultIdentifier;
- (id)sectionsWithCards;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardSectionDetail:(id)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setCommandDetail:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHideDivider:(bool)arg1;
- (void)setLeadingSwipeButtonItems:(id)arg1;
- (void)setNextCard:(id)arg1;
- (void)setParameterKeyPaths:(id)arg1;
- (void)setPreviewButtonItems:(id)arg1;
- (void)setPreviewButtonItemsTitle:(id)arg1;
- (void)setPreviewCommand:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setShouldHideInAmbientMode:(bool)arg1;
- (void)setTrailingSwipeButtonItems:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUserReportRequest:(id)arg1;
- (bool)shouldHideInAmbientMode;
- (id)trailingSwipeButtonItems;
- (id)type;
- (id)userReportRequest;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

+ (id)acs_uniquelyIdentifiedCardSection;

- (void)acs_addParameter:(id)arg1;
- (id)acs_parameterKeyPathFromParameter:(id)arg1;
- (void)acs_setParameters:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)actionCommands;
- (id)backingCardSection;
- (id)cardSectionIdentifier;
- (bool)hasNextCard;
- (id)parametersForInteraction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

+ (double)searchUIHorizontallyScrollingSectionModel_idealItemWidth;

- (Class)_searchUIHorizontalViewClass;
- (Class)_searchUIHorizontallyScrollingButtonControllerClass;
- (Class)_searchUIViewClass;
- (double)_superGroupSpacing;
- (bool)_wantsHeaderSeparator;
- (void)customizeSection:(id)arg1 isLeading:(bool)arg2;
- (long long)preferredBackgroundStyleForIsLeadingPrimaryCard:(bool)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })searchUIGridSectionModel_groupInsetFor:(id)arg1;
- (id)searchUIGridSectionModel_heightDimensionWithColumnCount:(unsigned long long)arg1;
- (double)searchUIGridSectionModel_interItemSpacing;
- (bool)searchUIGridSectionModel_useBackground;
- (id)searchUIHorizontallyScrollingSectionModel_heightDimension;
- (double)searchUIHorizontallyScrollingSectionModel_interItemSpacing;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })searchUIHorizontallyScrollingSectionModel_sectionInsets;
- (bool)searchUIHorizontallyScrollingSectionModel_useBackground;
- (id)searchUIHorizontallyScrollingSectionModel_widthDimension;
- (double)searchUIHorizontallyScrollingSectionModel_widthDimensionMultiplier;
- (bool)supportsConfiguration;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (bool)_SUICKPInteractiveCardSectionViewController_shouldHandlePunchout;
- (bool)_SUICKPInteractiveCardSectionViewController_shouldRenderButtonOverlay;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (id)copyForFeedback;
- (void)setSpotlightBackingResult:(id)arg1;
- (id)spotlightBackingResult;

@end

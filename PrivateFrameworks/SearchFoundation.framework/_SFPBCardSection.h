
@interface _SFPBCardSection : PBCodable <NSSecureCoding, _SFPBCardSection> {
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    NSString * _cardSectionDetail;
    NSString * _cardSectionId;
    _SFPBCommand * _command;
    NSArray * _commands;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSArray * _leadingSwipeButtonItems;
    _SFPBCard * _nextCard;
    NSArray * _parameterKeyPaths;
    NSArray * _previewButtonItems;
    NSString * _previewButtonItemsTitle;
    _SFPBCommand * _previewCommand;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    NSString * _resultIdentifier;
    int  _separatorStyle;
    bool  _shouldHideInAmbientMode;
    NSArray * _trailingSwipeButtonItems;
    int  _type;
    _SFPBUserReportRequest * _userReportRequest;
    _SFPBCardSectionValue * _value;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, retain) _SFPBCommand *command;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leadingSwipeButtonItems;
@property (nonatomic, retain) _SFPBCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (nonatomic, copy) NSString *previewButtonItemsTitle;
@property (nonatomic, retain) _SFPBCommand *previewCommand;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic) int type;
@property (nonatomic, retain) _SFPBUserReportRequest *userReportRequest;
@property (nonatomic, retain) _SFPBCardSectionValue *value;

- (void).cxx_destruct;
- (void)addCommands:(id)arg1;
- (void)addLeadingSwipeButtonItems:(id)arg1;
- (void)addParameterKeyPaths:(id)arg1;
- (void)addPreviewButtonItems:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)addTrailingSwipeButtonItems:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (id)cardSectionDetail;
- (id)cardSectionId;
- (void)clearCommands;
- (void)clearLeadingSwipeButtonItems;
- (void)clearParameterKeyPaths;
- (void)clearPreviewButtonItems;
- (void)clearPunchoutOptions;
- (void)clearTrailingSwipeButtonItems;
- (id)command;
- (id)commands;
- (id)commandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandsCount;
- (id)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSFCardSection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)leadingSwipeButtonItems;
- (id)leadingSwipeButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)leadingSwipeButtonItemsCount;
- (id)nextCard;
- (id)parameterKeyPaths;
- (id)parameterKeyPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeyPathsCount;
- (id)previewButtonItems;
- (id)previewButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewButtonItemsCount;
- (id)previewButtonItemsTitle;
- (id)previewCommand;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (id)resultIdentifier;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardSectionDetail:(id)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
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
- (void)setType:(int)arg1;
- (void)setUserReportRequest:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldHideInAmbientMode;
- (id)trailingSwipeButtonItems;
- (id)trailingSwipeButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trailingSwipeButtonItemsCount;
- (int)type;
- (id)userReportRequest;
- (id)value;
- (void)writeTo:(id)arg1;

@end


@interface SFCollectionCardSection : SFCardSection <NSCopying, NSSecureCoding, SFCollectionCardSection> {
    SFCommandButtonItem * _buttonItem;
    NSArray * _cardSections;
    SFCollectionStyle * _collectionStyle;
    SFRichText * _title;
    SFCommandButtonItem * _titleButtonItem;
    NSString * _type;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic, retain) SFCommandButtonItem *buttonItem;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *cardSections;
@property (nonatomic, retain) SFCollectionStyle *collectionStyle;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) bool hasBottomPadding;
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
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFRichText *title;
@property (nonatomic, retain) SFCommandButtonItem *titleButtonItem;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCardsFromButtonsTo:(id)arg1;
- (id)buttonItem;
- (id)cardSections;
- (id)collectionStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)sectionsWithCards;
- (void)setButtonItem:(id)arg1;
- (void)setCardSections:(id)arg1;
- (void)setCollectionStyle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleButtonItem:(id)arg1;
- (void)setType:(id)arg1;
- (id)title;
- (id)titleButtonItem;
- (id)type;

@end

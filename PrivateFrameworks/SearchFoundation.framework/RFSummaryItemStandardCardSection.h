
@interface RFSummaryItemStandardCardSection : SFCardSection <NSCopying, NSSecureCoding, RFSummaryItemStandardCardSection> {
    struct { 
        unsigned int suppress_text_2_if_text_1_exceeds_a_single_line : 1; 
    }  _has;
    bool  _suppress_text_2_if_text_1_exceeds_a_single_line;
    RFTextProperty * _text_1;
    NSArray * _text_2;
    NSArray * _text_3;
    RFTextProperty * _text_4;
    RFVisualProperty * _thumbnail;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
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
@property (nonatomic) bool suppress_text_2_if_text_1_exceeds_a_single_line;
@property (nonatomic, retain) RFTextProperty *text_1;
@property (nonatomic, copy) NSArray *text_2;
@property (nonatomic, copy) NSArray *text_3;
@property (nonatomic, retain) RFTextProperty *text_4;
@property (nonatomic, retain) RFVisualProperty *thumbnail;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSuppress_text_2_if_text_1_exceeds_a_single_line;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setSuppress_text_2_if_text_1_exceeds_a_single_line:(bool)arg1;
- (void)setText_1:(id)arg1;
- (void)setText_2:(id)arg1;
- (void)setText_3:(id)arg1;
- (void)setText_4:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (bool)suppress_text_2_if_text_1_exceeds_a_single_line;
- (id)text_1;
- (id)text_2;
- (id)text_3;
- (id)text_4;
- (id)thumbnail;

@end

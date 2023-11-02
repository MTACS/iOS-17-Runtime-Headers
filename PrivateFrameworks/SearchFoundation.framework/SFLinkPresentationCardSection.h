
@interface SFLinkPresentationCardSection : SFCardSection <NSCopying, NSSecureCoding, SFLinkPresentationCardSection> {
    NSString * _coreSpotlightIdentifier;
    struct { 
        unsigned int isHighlighted : 1; 
    }  _has;
    bool  _isHighlighted;
    NSArray * _peopleToBadge;
    NSString * _url;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool isHighlighted;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leadingSwipeButtonItems;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *peopleToBadge;
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
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsHighlighted;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHighlighted;
- (id)jsonData;
- (id)peopleToBadge;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setIsHighlighted:(bool)arg1;
- (void)setPeopleToBadge:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })searchUIGridSectionModel_groupInsetFor:(id)arg1;
- (id)searchUIGridSectionModel_heightDimensionWithColumnCount:(unsigned long long)arg1;
- (bool)searchUIGridSectionModel_useBackground;
- (id)searchUIHorizontallyScrollingSectionModel_heightDimension;
- (bool)searchUIHorizontallyScrollingSectionModel_useBackground;
- (double)searchUIHorizontallyScrollingSectionModel_widthDimensionMultiplier;

@end

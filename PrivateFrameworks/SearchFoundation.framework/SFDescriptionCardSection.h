
@interface SFDescriptionCardSection : SFTitleCardSection <NSCopying, NSSecureCoding, SFDescriptionCardSection> {
    SFImage * _attributionGlyph;
    NSString * _attributionText;
    NSURL * _attributionURL;
    bool  _descriptionExpand;
    NSNumber * _descriptionSize;
    SFText * _descriptionText;
    NSNumber * _descriptionWeight;
    NSString * _expandText;
    struct { 
        unsigned int titleNoWrap : 1; 
        unsigned int descriptionExpand : 1; 
        unsigned int imageAlign : 1; 
        unsigned int textAlign : 1; 
    }  _has;
    SFImage * _image;
    int  _imageAlign;
    NSArray * _richDescriptions;
    int  _textAlign;
    bool  _titleNoWrap;
    NSNumber * _titleWeight;
}

@property (nonatomic, retain) SFImage *attributionGlyph;
@property (nonatomic, copy) NSString *attributionText;
@property (nonatomic, copy) NSURL *attributionURL;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool descriptionExpand;
@property (nonatomic, copy) NSNumber *descriptionSize;
@property (nonatomic, retain) SFText *descriptionText;
@property (nonatomic, copy) NSNumber *descriptionWeight;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic, copy) NSString *expandText;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic) bool isCentered;
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
@property (nonatomic, copy) NSArray *richDescriptions;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) int textAlign;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool titleNoWrap;
@property (nonatomic, copy) NSNumber *titleWeight;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributionGlyph;
- (id)attributionText;
- (id)attributionURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)descriptionExpand;
- (id)descriptionSize;
- (id)descriptionText;
- (id)descriptionWeight;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expandText;
- (bool)hasDescriptionExpand;
- (bool)hasImageAlign;
- (bool)hasTextAlign;
- (bool)hasTitleNoWrap;
- (unsigned long long)hash;
- (id)image;
- (int)imageAlign;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)richDescriptions;
- (void)setAttributionGlyph:(id)arg1;
- (void)setAttributionText:(id)arg1;
- (void)setAttributionURL:(id)arg1;
- (void)setDescriptionExpand:(bool)arg1;
- (void)setDescriptionSize:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDescriptionWeight:(id)arg1;
- (void)setExpandText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setRichDescriptions:(id)arg1;
- (void)setTextAlign:(int)arg1;
- (void)setTitleNoWrap:(bool)arg1;
- (void)setTitleWeight:(id)arg1;
- (int)textAlign;
- (bool)titleNoWrap;
- (id)titleWeight;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (bool)_SUICKPInteractiveCardSectionViewController_shouldRenderButtonOverlay;

@end

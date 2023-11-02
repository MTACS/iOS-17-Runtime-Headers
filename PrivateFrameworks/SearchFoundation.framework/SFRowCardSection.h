
@interface SFRowCardSection : SFCardSection <NSCopying, NSSecureCoding, SFRowCardSection> {
    SFImage * _attributionImage;
    bool  _cardPaddingBottom;
    struct { 
        unsigned int imageIsRightAligned : 1; 
        unsigned int keyNoWrap : 1; 
        unsigned int valueNoWrap : 1; 
        unsigned int cardPaddingBottom : 1; 
    }  _has;
    SFImage * _image;
    bool  _imageIsRightAligned;
    NSString * _key;
    bool  _keyNoWrap;
    NSNumber * _keyWeight;
    SFRichText * _leadingSubtitle;
    SFRichText * _leadingText;
    SFRichText * _trailingSubtitle;
    SFRichText * _trailingText;
    NSString * _type;
    NSString * _value;
    bool  _valueNoWrap;
    NSNumber * _valueWeight;
}

@property (nonatomic, retain) SFImage *attributionImage;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic) bool cardPaddingBottom;
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
@property (nonatomic, retain) SFImage *image;
@property (nonatomic) bool imageIsRightAligned;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) bool keyNoWrap;
@property (nonatomic, copy) NSNumber *keyWeight;
@property (nonatomic, retain) SFRichText *leadingSubtitle;
@property (nonatomic, copy) NSArray *leadingSwipeButtonItems;
@property (nonatomic, retain) SFRichText *leadingText;
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
@property (nonatomic, retain) SFRichText *trailingSubtitle;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, retain) SFRichText *trailingText;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;
@property (nonatomic, copy) NSString *value;
@property (nonatomic) bool valueNoWrap;
@property (nonatomic, copy) NSNumber *valueWeight;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributionImage;
- (bool)cardPaddingBottom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCardPaddingBottom;
- (bool)hasImageIsRightAligned;
- (bool)hasKeyNoWrap;
- (bool)hasValueNoWrap;
- (unsigned long long)hash;
- (id)image;
- (bool)imageIsRightAligned;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)key;
- (bool)keyNoWrap;
- (id)keyWeight;
- (id)leadingSubtitle;
- (id)leadingText;
- (void)setAttributionImage:(id)arg1;
- (void)setCardPaddingBottom:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageIsRightAligned:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setKeyNoWrap:(bool)arg1;
- (void)setKeyWeight:(id)arg1;
- (void)setLeadingSubtitle:(id)arg1;
- (void)setLeadingText:(id)arg1;
- (void)setTrailingSubtitle:(id)arg1;
- (void)setTrailingText:(id)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueNoWrap:(bool)arg1;
- (void)setValueWeight:(id)arg1;
- (id)trailingSubtitle;
- (id)trailingText;
- (id)type;
- (id)value;
- (bool)valueNoWrap;
- (id)valueWeight;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end

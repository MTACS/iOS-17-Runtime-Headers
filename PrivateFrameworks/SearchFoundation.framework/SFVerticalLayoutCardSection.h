
@interface SFVerticalLayoutCardSection : SFCardSection <NSCopying, NSSecureCoding, SFVerticalLayoutCardSection> {
    bool  _contentsLeading;
    SFRichText * _footnote;
    struct { 
        unsigned int contentsLeading : 1; 
        unsigned int useAppIconMetrics : 1; 
    }  _has;
    SFImage * _thumbnail;
    SFRichText * _thumbnailOverlayText;
    SFRichText * _title;
    NSString * _type;
    bool  _useAppIconMetrics;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic) bool contentsLeading;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic, retain) SFRichText *footnote;
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
@property (nonatomic, retain) SFImage *thumbnail;
@property (nonatomic, retain) SFRichText *thumbnailOverlayText;
@property (nonatomic, retain) SFRichText *title;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) bool useAppIconMetrics;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)contentsLeading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)footnote;
- (bool)hasContentsLeading;
- (bool)hasUseAppIconMetrics;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setContentsLeading:(bool)arg1;
- (void)setFootnote:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailOverlayText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUseAppIconMetrics:(bool)arg1;
- (id)thumbnail;
- (id)thumbnailOverlayText;
- (id)title;
- (id)type;
- (bool)useAppIconMetrics;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIHorizontallyScrollingButtonControllerClass;
- (Class)_searchUIViewClass;
- (double)searchUIHorizontallyScrollingSectionModel_widthDimensionMultiplier;

@end

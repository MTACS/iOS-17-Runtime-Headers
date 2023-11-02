
@interface SFSuggestionCardSection : SFCardSection <NSCopying, NSSecureCoding, SFSuggestionCardSection> {
    SFRichText * _detailText;
    struct { 
        unsigned int isContact : 1; 
        unsigned int suggestionType : 1; 
    }  _has;
    bool  _isContact;
    NSString * _scopedSearchSectionBundleIdentifier;
    SFRichText * _suggestionText;
    int  _suggestionType;
    SFImage * _thumbnail;
    SFFormattedText * _trailingBottomText;
    SFFormattedText * _trailingMiddleText;
    NSString * _type;
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
@property (nonatomic, retain) SFRichText *detailText;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool isContact;
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
@property (nonatomic, copy) NSString *scopedSearchSectionBundleIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (nonatomic, retain) SFRichText *suggestionText;
@property (nonatomic) int suggestionType;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFImage *thumbnail;
@property (nonatomic, retain) SFFormattedText *trailingBottomText;
@property (nonatomic, retain) SFFormattedText *trailingMiddleText;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailText;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsContact;
- (bool)hasSuggestionType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isContact;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)scopedSearchSectionBundleIdentifier;
- (void)setDetailText:(id)arg1;
- (void)setIsContact:(bool)arg1;
- (void)setScopedSearchSectionBundleIdentifier:(id)arg1;
- (void)setSuggestionText:(id)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTrailingBottomText:(id)arg1;
- (void)setTrailingMiddleText:(id)arg1;
- (void)setType:(id)arg1;
- (id)suggestionText;
- (int)suggestionType;
- (id)thumbnail;
- (id)trailingBottomText;
- (id)trailingMiddleText;
- (id)type;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end

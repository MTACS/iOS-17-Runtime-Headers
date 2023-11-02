
@interface SFTableRowCardSection : SFCardSection <NSCopying, NSSecureCoding, SFTableRowCardSection> {
    bool  _alignRowsToHeader;
    SFTableAlignmentSchema * _alignmentSchema;
    NSArray * _data;
    struct { 
        unsigned int isSubHeader : 1; 
        unsigned int reducedRowHeight : 1; 
        unsigned int verticalAlign : 1; 
        unsigned int alignRowsToHeader : 1; 
    }  _has;
    bool  _isSubHeader;
    bool  _reducedRowHeight;
    NSArray * _richData;
    NSString * _tabGroupIdentifier;
    NSString * _tableIdentifier;
    NSString * _type;
    int  _verticalAlign;
}

@property (nonatomic) bool alignRowsToHeader;
@property (nonatomic, retain) SFTableAlignmentSchema *alignmentSchema;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool isSubHeader;
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
@property (nonatomic) bool reducedRowHeight;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic, copy) NSArray *richData;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tabGroupIdentifier;
@property (nonatomic, copy) NSString *tableIdentifier;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;
@property (nonatomic) int verticalAlign;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)alignRowsToHeader;
- (id)alignmentSchema;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAlignRowsToHeader;
- (bool)hasIsSubHeader;
- (bool)hasReducedRowHeight;
- (bool)hasVerticalAlign;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSubHeader;
- (id)jsonData;
- (bool)reducedRowHeight;
- (id)richData;
- (void)setAlignRowsToHeader:(bool)arg1;
- (void)setAlignmentSchema:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIsSubHeader:(bool)arg1;
- (void)setReducedRowHeight:(bool)arg1;
- (void)setRichData:(id)arg1;
- (void)setTabGroupIdentifier:(id)arg1;
- (void)setTableIdentifier:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVerticalAlign:(int)arg1;
- (id)tabGroupIdentifier;
- (id)tableIdentifier;
- (id)type;
- (int)verticalAlign;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end

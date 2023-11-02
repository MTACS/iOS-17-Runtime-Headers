
@interface SFSocialMediaPostCardSection : SFCardSection <NSCopying, NSSecureCoding, SFSocialMediaPostCardSection> {
    NSString * _footnote;
    NSString * _handle;
    struct { 
        unsigned int nameNoWrap : 1; 
    }  _has;
    NSString * _name;
    NSNumber * _nameMaxLines;
    bool  _nameNoWrap;
    SFImage * _picture;
    SFRichText * _post;
    SFImage * _profilePicture;
    NSString * _timestamp;
    NSString * _type;
    SFImage * _verifiedGlyph;
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
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leadingSwipeButtonItems;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *nameMaxLines;
@property (nonatomic) bool nameNoWrap;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, retain) SFImage *picture;
@property (nonatomic, retain) SFRichText *post;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (nonatomic, retain) NSString *previewButtonItemsTitle;
@property (nonatomic, retain) SFCommand *previewCommand;
@property (nonatomic, retain) SFImage *profilePicture;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timestamp;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;
@property (nonatomic, retain) SFImage *verifiedGlyph;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)footnote;
- (id)handle;
- (bool)hasNameNoWrap;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (id)nameMaxLines;
- (bool)nameNoWrap;
- (id)picture;
- (id)post;
- (id)profilePicture;
- (void)setFootnote:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameMaxLines:(id)arg1;
- (void)setNameNoWrap:(bool)arg1;
- (void)setPicture:(id)arg1;
- (void)setPost:(id)arg1;
- (void)setProfilePicture:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVerifiedGlyph:(id)arg1;
- (id)timestamp;
- (id)type;
- (id)verifiedGlyph;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end

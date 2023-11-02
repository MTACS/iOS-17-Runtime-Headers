
@interface SFMediaRemoteControlCardSection : SFCardSection <NSCopying, NSSecureCoding, SFMediaRemoteControlCardSection> {
    struct { 
        unsigned int playbackRouteUniqueIdentifierIsEncrypted : 1; 
    }  _has;
    NSString * _playbackBundleIdentifier;
    NSString * _playbackRouteUniqueIdentifier;
    bool  _playbackRouteUniqueIdentifierIsEncrypted;
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
@property (nonatomic, copy) NSString *playbackBundleIdentifier;
@property (nonatomic, copy) NSString *playbackRouteUniqueIdentifier;
@property (nonatomic) bool playbackRouteUniqueIdentifierIsEncrypted;
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
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPlaybackRouteUniqueIdentifierIsEncrypted;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)playbackBundleIdentifier;
- (id)playbackRouteUniqueIdentifier;
- (bool)playbackRouteUniqueIdentifierIsEncrypted;
- (void)setPlaybackBundleIdentifier:(id)arg1;
- (void)setPlaybackRouteUniqueIdentifier:(id)arg1;
- (void)setPlaybackRouteUniqueIdentifierIsEncrypted:(bool)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end

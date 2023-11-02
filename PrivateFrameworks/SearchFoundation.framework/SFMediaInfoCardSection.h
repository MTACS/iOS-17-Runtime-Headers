
@interface SFMediaInfoCardSection : SFCardSection <NSCopying, NSSecureCoding, SFMediaInfoCardSection> {
    NSArray * _details;
    struct { 
        unsigned int isMediaContainer : 1; 
        unsigned int watchListItemType : 1; 
    }  _has;
    bool  _isMediaContainer;
    SFMediaItem * _mediaItem;
    NSArray * _offers;
    SFActionItem * _playAction;
    SFRichText * _specialOfferButtonLabel;
    NSString * _type;
    NSString * _watchListButtonLabel;
    NSString * _watchListConfirmationText;
    NSString * _watchListContinuationText;
    NSString * _watchListIdentifier;
    int  _watchListItemType;
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
@property (nonatomic, copy) NSArray *details;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool isMediaContainer;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leadingSwipeButtonItems;
@property (nonatomic, retain) SFMediaItem *mediaItem;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, retain) SFActionItem *playAction;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (nonatomic, retain) NSString *previewButtonItemsTitle;
@property (nonatomic, retain) SFCommand *previewCommand;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (nonatomic, retain) SFRichText *specialOfferButtonLabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;
@property (nonatomic, copy) NSString *watchListButtonLabel;
@property (nonatomic, copy) NSString *watchListConfirmationText;
@property (nonatomic, copy) NSString *watchListContinuationText;
@property (nonatomic, copy) NSString *watchListIdentifier;
@property (nonatomic) int watchListItemType;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)details;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsMediaContainer;
- (bool)hasWatchListItemType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMediaContainer;
- (id)jsonData;
- (id)mediaItem;
- (id)offers;
- (id)playAction;
- (void)setDetails:(id)arg1;
- (void)setIsMediaContainer:(bool)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPlayAction:(id)arg1;
- (void)setSpecialOfferButtonLabel:(id)arg1;
- (void)setType:(id)arg1;
- (void)setWatchListButtonLabel:(id)arg1;
- (void)setWatchListConfirmationText:(id)arg1;
- (void)setWatchListContinuationText:(id)arg1;
- (void)setWatchListIdentifier:(id)arg1;
- (void)setWatchListItemType:(int)arg1;
- (id)specialOfferButtonLabel;
- (id)type;
- (id)watchListButtonLabel;
- (id)watchListConfirmationText;
- (id)watchListContinuationText;
- (id)watchListIdentifier;
- (int)watchListItemType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end


@protocol _SFPBMediaInfoCardSection <NSObject>

@required

- (void)addDetails:(_SFPBMediaDetail *)arg1;
- (void)addOffers:(_SFPBMediaOffer *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearDetails;
- (void)clearOffers;
- (void)clearPunchoutOptions;
- (NSArray *)details;
- (_SFPBMediaDetail *)detailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)detailsCount;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isMediaContainer;
- (NSData *)jsonData;
- (_SFPBMediaItem *)mediaItem;
- (NSArray *)offers;
- (_SFPBMediaOffer *)offersAtIndex:(unsigned long long)arg1;
- (unsigned long long)offersCount;
- (_SFPBActionItem *)playAction;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDetails:(NSArray *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsMediaContainer:(bool)arg1;
- (void)setMediaItem:(_SFPBMediaItem *)arg1;
- (void)setOffers:(NSArray *)arg1;
- (void)setPlayAction:(_SFPBActionItem *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSpecialOfferButtonLabel:(_SFPBRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setWatchListButtonLabel:(NSString *)arg1;
- (void)setWatchListConfirmationText:(NSString *)arg1;
- (void)setWatchListContinuationText:(NSString *)arg1;
- (void)setWatchListIdentifier:(NSString *)arg1;
- (void)setWatchListItemType:(int)arg1;
- (_SFPBRichText *)specialOfferButtonLabel;
- (NSString *)type;
- (NSString *)watchListButtonLabel;
- (NSString *)watchListConfirmationText;
- (NSString *)watchListContinuationText;
- (NSString *)watchListIdentifier;
- (int)watchListItemType;

@end


@protocol SFMediaInfoCardSection <SFCardSection>

@required

- (NSArray *)details;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isMediaContainer;
- (NSData *)jsonData;
- (SFMediaItem *)mediaItem;
- (NSArray *)offers;
- (SFActionItem *)playAction;
- (void)setDetails:(NSArray *)arg1;
- (void)setIsMediaContainer:(bool)arg1;
- (void)setMediaItem:(SFMediaItem *)arg1;
- (void)setOffers:(NSArray *)arg1;
- (void)setPlayAction:(SFActionItem *)arg1;
- (void)setSpecialOfferButtonLabel:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setWatchListButtonLabel:(NSString *)arg1;
- (void)setWatchListConfirmationText:(NSString *)arg1;
- (void)setWatchListContinuationText:(NSString *)arg1;
- (void)setWatchListIdentifier:(NSString *)arg1;
- (void)setWatchListItemType:(int)arg1;
- (SFRichText *)specialOfferButtonLabel;
- (NSString *)type;
- (NSString *)watchListButtonLabel;
- (NSString *)watchListConfirmationText;
- (NSString *)watchListContinuationText;
- (NSString *)watchListIdentifier;
- (int)watchListItemType;

@end

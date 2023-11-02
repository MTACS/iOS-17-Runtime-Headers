
@protocol SFWatchListItem <NSObject>

@required

- (NSString *)addToUpNextText;
- (NSString *)addedToUpNextText;
- (NSString *)continueInTextFormat;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)inUpNextText;
- (NSString *)installButtonTitle;
- (bool)isMediaContainer;
- (NSData *)jsonData;
- (NSString *)openButtonTitle;
- (NSString *)purchaseOfferTextFormat;
- (NSString *)seasonEpisodeTextFormat;
- (void)setAddToUpNextText:(NSString *)arg1;
- (void)setAddedToUpNextText:(NSString *)arg1;
- (void)setContinueInTextFormat:(NSString *)arg1;
- (void)setInUpNextText:(NSString *)arg1;
- (void)setInstallButtonTitle:(NSString *)arg1;
- (void)setIsMediaContainer:(bool)arg1;
- (void)setOpenButtonTitle:(NSString *)arg1;
- (void)setPurchaseOfferTextFormat:(NSString *)arg1;
- (void)setSeasonEpisodeTextFormat:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setWatchListIdentifier:(NSString *)arg1;
- (void)setWatchLiveTextFormat:(NSString *)arg1;
- (int)type;
- (NSString *)watchListIdentifier;
- (NSString *)watchLiveTextFormat;

@end

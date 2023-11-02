
@interface _SFPBWatchListItem : PBCodable <NSSecureCoding, _SFPBWatchListItem> {
    NSString * _addToUpNextText;
    NSString * _addedToUpNextText;
    NSString * _continueInTextFormat;
    NSString * _inUpNextText;
    NSString * _installButtonTitle;
    bool  _isMediaContainer;
    NSString * _openButtonTitle;
    NSString * _purchaseOfferTextFormat;
    NSString * _seasonEpisodeTextFormat;
    int  _type;
    NSString * _watchListIdentifier;
    NSString * _watchLiveTextFormat;
}

@property (nonatomic, copy) NSString *addToUpNextText;
@property (nonatomic, copy) NSString *addedToUpNextText;
@property (nonatomic, copy) NSString *continueInTextFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *inUpNextText;
@property (nonatomic, copy) NSString *installButtonTitle;
@property (nonatomic) bool isMediaContainer;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *openButtonTitle;
@property (nonatomic, copy) NSString *purchaseOfferTextFormat;
@property (nonatomic, copy) NSString *seasonEpisodeTextFormat;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *watchListIdentifier;
@property (nonatomic, copy) NSString *watchLiveTextFormat;

- (void).cxx_destruct;
- (id)addToUpNextText;
- (id)addedToUpNextText;
- (id)continueInTextFormat;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)inUpNextText;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)installButtonTitle;
- (bool)isEqual:(id)arg1;
- (bool)isMediaContainer;
- (id)jsonData;
- (id)openButtonTitle;
- (id)purchaseOfferTextFormat;
- (bool)readFrom:(id)arg1;
- (id)seasonEpisodeTextFormat;
- (void)setAddToUpNextText:(id)arg1;
- (void)setAddedToUpNextText:(id)arg1;
- (void)setContinueInTextFormat:(id)arg1;
- (void)setInUpNextText:(id)arg1;
- (void)setInstallButtonTitle:(id)arg1;
- (void)setIsMediaContainer:(bool)arg1;
- (void)setOpenButtonTitle:(id)arg1;
- (void)setPurchaseOfferTextFormat:(id)arg1;
- (void)setSeasonEpisodeTextFormat:(id)arg1;
- (void)setType:(int)arg1;
- (void)setWatchListIdentifier:(id)arg1;
- (void)setWatchLiveTextFormat:(id)arg1;
- (int)type;
- (id)watchListIdentifier;
- (id)watchLiveTextFormat;
- (void)writeTo:(id)arg1;

@end

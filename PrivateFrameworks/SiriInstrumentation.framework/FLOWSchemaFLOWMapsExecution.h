
@interface FLOWSchemaFLOWMapsExecution : SISchemaInstrumentationMessage {
    struct { 
        unsigned int mapsFeature : 1; 
        unsigned int mapsQueryLabel : 1; 
        unsigned int isSearchAlongRouteRequest : 1; 
        unsigned int isProxySearchResult : 1; 
        unsigned int isSpellCorrected : 1; 
    }  _has;
    bool  _isProxySearchResult;
    bool  _isSearchAlongRouteRequest;
    bool  _isSpellCorrected;
    int  _mapsFeature;
    int  _mapsQueryLabel;
}

@property (nonatomic) bool hasIsProxySearchResult;
@property (nonatomic) bool hasIsSearchAlongRouteRequest;
@property (nonatomic) bool hasIsSpellCorrected;
@property (nonatomic) bool hasMapsFeature;
@property (nonatomic) bool hasMapsQueryLabel;
@property (nonatomic) bool isProxySearchResult;
@property (nonatomic) bool isSearchAlongRouteRequest;
@property (nonatomic) bool isSpellCorrected;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mapsFeature;
@property (nonatomic) int mapsQueryLabel;

- (void)deleteIsProxySearchResult;
- (void)deleteIsSearchAlongRouteRequest;
- (void)deleteIsSpellCorrected;
- (void)deleteMapsFeature;
- (void)deleteMapsQueryLabel;
- (id)dictionaryRepresentation;
- (bool)hasIsProxySearchResult;
- (bool)hasIsSearchAlongRouteRequest;
- (bool)hasIsSpellCorrected;
- (bool)hasMapsFeature;
- (bool)hasMapsQueryLabel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProxySearchResult;
- (bool)isSearchAlongRouteRequest;
- (bool)isSpellCorrected;
- (id)jsonData;
- (int)mapsFeature;
- (int)mapsQueryLabel;
- (bool)readFrom:(id)arg1;
- (void)setHasIsProxySearchResult:(bool)arg1;
- (void)setHasIsSearchAlongRouteRequest:(bool)arg1;
- (void)setHasIsSpellCorrected:(bool)arg1;
- (void)setHasMapsFeature:(bool)arg1;
- (void)setHasMapsQueryLabel:(bool)arg1;
- (void)setIsProxySearchResult:(bool)arg1;
- (void)setIsSearchAlongRouteRequest:(bool)arg1;
- (void)setIsSpellCorrected:(bool)arg1;
- (void)setMapsFeature:(int)arg1;
- (void)setMapsQueryLabel:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

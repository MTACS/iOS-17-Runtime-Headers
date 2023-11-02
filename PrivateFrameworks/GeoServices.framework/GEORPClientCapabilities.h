
@interface GEORPClientCapabilities : PBCodable <NSCopying> {
    struct { 
        unsigned int has_transitMarketSupport : 1; 
        unsigned int has_hasConstrainedProblemStatusSize : 1; 
        unsigned int has_hasFeatureHandle : 1; 
        unsigned int has_hasNoOptInRequest : 1; 
        unsigned int has_hasSupportForIdsBasedNotifications : 1; 
    }  _flags;
    bool  _hasConstrainedProblemStatusSize;
    bool  _hasFeatureHandle;
    bool  _hasNoOptInRequest;
    bool  _hasSupportForIdsBasedNotifications;
    int  _transitMarketSupport;
}

@property (nonatomic) bool hasConstrainedProblemStatusSize;
@property (nonatomic) bool hasFeatureHandle;
@property (nonatomic) bool hasHasConstrainedProblemStatusSize;
@property (nonatomic) bool hasHasFeatureHandle;
@property (nonatomic) bool hasHasNoOptInRequest;
@property (nonatomic) bool hasHasSupportForIdsBasedNotifications;
@property (nonatomic) bool hasNoOptInRequest;
@property (nonatomic) bool hasSupportForIdsBasedNotifications;
@property (nonatomic) bool hasTransitMarketSupport;
@property (nonatomic) int transitMarketSupport;

+ (bool)isValid:(id)arg1;

- (int)StringAsTransitMarketSupport:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConstrainedProblemStatusSize;
- (bool)hasFeatureHandle;
- (bool)hasHasConstrainedProblemStatusSize;
- (bool)hasHasFeatureHandle;
- (bool)hasHasNoOptInRequest;
- (bool)hasHasSupportForIdsBasedNotifications;
- (bool)hasNoOptInRequest;
- (bool)hasSupportForIdsBasedNotifications;
- (bool)hasTransitMarketSupport;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasConstrainedProblemStatusSize:(bool)arg1;
- (void)setHasFeatureHandle:(bool)arg1;
- (void)setHasHasConstrainedProblemStatusSize:(bool)arg1;
- (void)setHasHasFeatureHandle:(bool)arg1;
- (void)setHasHasNoOptInRequest:(bool)arg1;
- (void)setHasHasSupportForIdsBasedNotifications:(bool)arg1;
- (void)setHasNoOptInRequest:(bool)arg1;
- (void)setHasSupportForIdsBasedNotifications:(bool)arg1;
- (void)setHasTransitMarketSupport:(bool)arg1;
- (void)setTransitMarketSupport:(int)arg1;
- (int)transitMarketSupport;
- (id)transitMarketSupportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


@interface GEORoutingFeaturesInfo : PBCodable <NSCopying> {
    GEOChargingNetworkInfo * _chargingNetworkInfo;
    int  _destinationVariant;
    struct { 
        unsigned int has_destinationVariant : 1; 
    }  _flags;
}

@property (nonatomic, retain) GEOChargingNetworkInfo *chargingNetworkInfo;
@property (nonatomic) int destinationVariant;
@property (nonatomic, readonly) bool hasChargingNetworkInfo;
@property (nonatomic) bool hasDestinationVariant;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsDestinationVariant:(id)arg1;
- (id)chargingNetworkInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)destinationVariant;
- (id)destinationVariantAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasChargingNetworkInfo;
- (bool)hasDestinationVariant;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChargingNetworkInfo:(id)arg1;
- (void)setDestinationVariant:(int)arg1;
- (void)setHasDestinationVariant:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

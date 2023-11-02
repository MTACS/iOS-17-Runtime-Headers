
@interface GEOLogMsgStateDirectionsDetail : PBCodable <NSCopying> {
    struct { 
        unsigned int has_transportType : 1; 
        unsigned int has_isEv : 1; 
    }  _flags;
    bool  _isEv;
    int  _transportType;
}

@property (nonatomic) bool hasIsEv;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool isEv;
@property (nonatomic) int transportType;

+ (bool)isValid:(id)arg1;

- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsEv;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEv;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsEv:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setIsEv:(bool)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

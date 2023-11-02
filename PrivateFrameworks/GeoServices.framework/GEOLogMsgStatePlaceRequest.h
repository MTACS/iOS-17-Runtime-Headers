
@interface GEOLogMsgStatePlaceRequest : PBCodable <NSCopying> {
    struct { 
        unsigned int has_placeRequestType : 1; 
    }  _flags;
    GEOPDPlaceRequest * _placeDataRequest;
    int  _placeRequestType;
}

@property (nonatomic, readonly) bool hasPlaceDataRequest;
@property (nonatomic) bool hasPlaceRequestType;
@property (nonatomic, retain) GEOPDPlaceRequest *placeDataRequest;
@property (nonatomic) int placeRequestType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPlaceRequestType:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPlaceDataRequest;
- (bool)hasPlaceRequestType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)placeDataRequest;
- (int)placeRequestType;
- (id)placeRequestTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPlaceRequestType:(bool)arg1;
- (void)setPlaceDataRequest:(id)arg1;
- (void)setPlaceRequestType:(int)arg1;
- (void)writeTo:(id)arg1;

@end


@interface GEOLogMsgStateCarPlay : PBCodable <NSCopying> {
    GEOCarInfo * _carInfo;
    struct { 
        unsigned int has_isConnected : 1; 
    }  _flags;
    bool  _isConnected;
}

@property (nonatomic, retain) GEOCarInfo *carInfo;
@property (nonatomic, readonly) bool hasCarInfo;
@property (nonatomic) bool hasIsConnected;
@property (nonatomic) bool isConnected;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)carInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCarInfo;
- (bool)hasIsConnected;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCarInfo:(id)arg1;
- (void)setHasIsConnected:(bool)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

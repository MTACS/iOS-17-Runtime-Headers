
@interface GEOTransitTransferInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_transferMuid : 1; 
        unsigned int has_transferTime : 1; 
    }  _flags;
    unsigned long long  _transferMuid;
    unsigned int  _transferTime;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasTransferMuid;
@property (nonatomic) bool hasTransferTime;
@property (nonatomic) unsigned long long transferMuid;
@property (nonatomic) unsigned int transferTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransferMuid;
- (bool)hasTransferTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTransferMuid:(bool)arg1;
- (void)setHasTransferTime:(bool)arg1;
- (void)setTransferMuid:(unsigned long long)arg1;
- (void)setTransferTime:(unsigned int)arg1;
- (unsigned long long)transferMuid;
- (unsigned int)transferTime;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

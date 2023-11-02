
@interface GEOOfflineMetadata : PBCodable <NSCopying> {
    unsigned long long  _dataVersion;
    struct { 
        unsigned int has_dataVersion : 1; 
        unsigned int has_regulatoryRegionId : 1; 
    }  _flags;
    unsigned int  _regulatoryRegionId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long dataVersion;
@property (nonatomic) bool hasDataVersion;
@property (nonatomic) bool hasRegulatoryRegionId;
@property (nonatomic) unsigned int regulatoryRegionId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataVersion;
- (bool)hasRegulatoryRegionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)regulatoryRegionId;
- (void)setDataVersion:(unsigned long long)arg1;
- (void)setHasDataVersion:(bool)arg1;
- (void)setHasRegulatoryRegionId:(bool)arg1;
- (void)setRegulatoryRegionId:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

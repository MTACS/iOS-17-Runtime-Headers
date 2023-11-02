
@interface GEOPDDatasetABStatus : PBCodable <NSCopying> {
    unsigned int  _datasetId;
    struct { 
        unsigned int has_datasetId : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int datasetId;
@property (nonatomic) bool hasDatasetId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)datasetId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDatasetId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDatasetId:(unsigned int)arg1;
- (void)setHasDatasetId:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

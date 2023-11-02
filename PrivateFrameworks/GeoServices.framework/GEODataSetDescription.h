
@interface GEODataSetDescription : PBCodable <NSCopying> {
    NSString * _dataSetDescription;
    struct { 
        unsigned int has_identifier : 1; 
    }  _flags;
    unsigned int  _identifier;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *dataSetDescription;
@property (nonatomic, readonly) bool hasDataSetDescription;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSetDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataSetDescription;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDataSetDescription:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

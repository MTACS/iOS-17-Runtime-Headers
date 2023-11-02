
@interface GEOVLBuild : PBCodable <NSCopying> {
    unsigned int  _dataFormatVersion;
    unsigned int  _dataOutputVersion;
    struct { 
        unsigned int has_identifier : 1; 
        unsigned int has_dataFormatVersion : 1; 
        unsigned int has_dataOutputVersion : 1; 
        unsigned int has_routingKey : 1; 
    }  _flags;
    unsigned long long  _identifier;
    unsigned int  _routingKey;
}

@property (nonatomic) unsigned int dataFormatVersion;
@property (nonatomic) unsigned int dataOutputVersion;
@property (nonatomic) bool hasDataFormatVersion;
@property (nonatomic) bool hasDataOutputVersion;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasRoutingKey;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned int routingKey;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataFormatVersion;
- (unsigned int)dataOutputVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataFormatVersion;
- (bool)hasDataOutputVersion;
- (bool)hasIdentifier;
- (bool)hasRoutingKey;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)routingKey;
- (void)setDataFormatVersion:(unsigned int)arg1;
- (void)setDataOutputVersion:(unsigned int)arg1;
- (void)setHasDataFormatVersion:(bool)arg1;
- (void)setHasDataOutputVersion:(bool)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasRoutingKey:(bool)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setRoutingKey:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end

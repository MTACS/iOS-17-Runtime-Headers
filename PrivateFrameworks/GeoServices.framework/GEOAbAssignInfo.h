
@interface GEOAbAssignInfo : PBCodable <NSCopying> {
    NSString * _abAssignId;
    unsigned long long  _createdAtTimestamp;
    struct { 
        unsigned int has_createdAtTimestamp : 1; 
        unsigned int has_relativeTimestamp : 1; 
    }  _flags;
    unsigned long long  _relativeTimestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *abAssignId;
@property (nonatomic) unsigned long long createdAtTimestamp;
@property (nonatomic, readonly) bool hasAbAssignId;
@property (nonatomic) bool hasCreatedAtTimestamp;
@property (nonatomic) bool hasRelativeTimestamp;
@property (nonatomic) unsigned long long relativeTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)abAssignId;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)createdAtTimestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbAssignId;
- (bool)hasCreatedAtTimestamp;
- (bool)hasRelativeTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)relativeTimestamp;
- (void)setAbAssignId:(id)arg1;
- (void)setCreatedAtTimestamp:(unsigned long long)arg1;
- (void)setHasCreatedAtTimestamp:(bool)arg1;
- (void)setHasRelativeTimestamp:(bool)arg1;
- (void)setRelativeTimestamp:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

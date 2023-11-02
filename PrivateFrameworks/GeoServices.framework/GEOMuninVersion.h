
@interface GEOMuninVersion : PBCodable <NSCopying> {
    NSMutableArray * _coverages;
    struct { 
        unsigned int has_version : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
    unsigned int  _version;
}

@property (nonatomic, retain) NSMutableArray *coverages;
@property (nonatomic) bool hasVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int version;

+ (Class)coverageType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addCoverage:(id)arg1;
- (void)clearCoverages;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverageAtIndex:(unsigned long long)arg1;
- (id)coverages;
- (unsigned long long)coveragesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoverages:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)unknownFields;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end

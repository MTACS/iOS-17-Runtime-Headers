
@interface GEOPBOfflineDataBatchesSizeResponse : PBCodable <NSCopying> {
    unsigned int  _batchCount;
    unsigned long long  _compressedSizeBytes;
    struct { 
        unsigned int has_compressedSizeBytes : 1; 
        unsigned int has_sizeBytes : 1; 
        unsigned int has_batchCount : 1; 
    }  _flags;
    unsigned long long  _sizeBytes;
}

@property (nonatomic) unsigned int batchCount;
@property (nonatomic) unsigned long long compressedSizeBytes;
@property (nonatomic) bool hasBatchCount;
@property (nonatomic) bool hasCompressedSizeBytes;
@property (nonatomic) bool hasSizeBytes;
@property (nonatomic) unsigned long long sizeBytes;

+ (bool)isValid:(id)arg1;

- (unsigned int)batchCount;
- (unsigned long long)compressedSizeBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBatchCount;
- (bool)hasCompressedSizeBytes;
- (bool)hasSizeBytes;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBatchCount:(unsigned int)arg1;
- (void)setCompressedSizeBytes:(unsigned long long)arg1;
- (void)setHasBatchCount:(bool)arg1;
- (void)setHasCompressedSizeBytes:(bool)arg1;
- (void)setHasSizeBytes:(bool)arg1;
- (void)setSizeBytes:(unsigned long long)arg1;
- (unsigned long long)sizeBytes;
- (void)writeTo:(id)arg1;

@end

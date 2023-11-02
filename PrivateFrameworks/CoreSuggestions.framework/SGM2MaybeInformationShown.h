
@interface SGM2MaybeInformationShown : PBCodable <NSCopying> {
    int  _extracted;
    unsigned int  _extractionModelVersion;
    struct { 
        unsigned int extracted : 1; 
        unsigned int extractionModelVersion : 1; 
    }  _has;
    NSString * _key;
}

@property (nonatomic) int extracted;
@property (nonatomic) unsigned int extractionModelVersion;
@property (nonatomic) bool hasExtracted;
@property (nonatomic) bool hasExtractionModelVersion;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (int)StringAsExtracted:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)extracted;
- (id)extractedAsString:(int)arg1;
- (unsigned int)extractionModelVersion;
- (bool)hasExtracted;
- (bool)hasExtractionModelVersion;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExtracted:(int)arg1;
- (void)setExtractionModelVersion:(unsigned int)arg1;
- (void)setHasExtracted:(bool)arg1;
- (void)setHasExtractionModelVersion:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end


@interface GEOVLPrecision : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _precisions;
}

@property (nonatomic, readonly) unsigned int*precisions;
@property (nonatomic, readonly) unsigned long long precisionsCount;

+ (bool)isValid:(id)arg1;

- (void)addPrecisions:(unsigned int)arg1;
- (void)clearPrecisions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int*)precisions;
- (unsigned int)precisionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)precisionsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPrecisions:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

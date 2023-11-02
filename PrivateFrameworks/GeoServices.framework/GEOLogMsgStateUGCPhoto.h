
@interface GEOLogMsgStateUGCPhoto : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _photoSources;
}

@property (nonatomic, readonly) int*photoSources;
@property (nonatomic, readonly) unsigned long long photoSourcesCount;

+ (bool)isValid:(id)arg1;

- (int)StringAsPhotoSources:(id)arg1;
- (void)addPhotoSource:(int)arg1;
- (void)clearPhotoSources;
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
- (int)photoSourceAtIndex:(unsigned long long)arg1;
- (int*)photoSources;
- (id)photoSourcesAsString:(int)arg1;
- (unsigned long long)photoSourcesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPhotoSources:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

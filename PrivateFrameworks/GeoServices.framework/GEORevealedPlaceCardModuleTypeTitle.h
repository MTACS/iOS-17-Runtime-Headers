
@interface GEORevealedPlaceCardModuleTypeTitle : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _titleElements;
}

@property (nonatomic, readonly) int*titleElements;
@property (nonatomic, readonly) unsigned long long titleElementsCount;

+ (bool)isValid:(id)arg1;

- (int)StringAsTitleElements:(id)arg1;
- (void)addTitleElements:(int)arg1;
- (void)clearTitleElements;
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
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTitleElements:(int*)arg1 count:(unsigned long long)arg2;
- (int*)titleElements;
- (id)titleElementsAsString:(int)arg1;
- (int)titleElementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)titleElementsCount;
- (void)writeTo:(id)arg1;

@end

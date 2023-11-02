
@interface ASCodableDatabaseCompetitionPreferredVictoryBadgeStyles : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _styles;
}

@property (nonatomic, readonly) int*styles;
@property (nonatomic, readonly) unsigned long long stylesCount;

- (void)addStyles:(int)arg1;
- (void)clearStyles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStyles:(int*)arg1 count:(unsigned long long)arg2;
- (int*)styles;
- (int)stylesAtIndex:(unsigned long long)arg1;
- (unsigned long long)stylesCount;
- (void)writeTo:(id)arg1;

@end

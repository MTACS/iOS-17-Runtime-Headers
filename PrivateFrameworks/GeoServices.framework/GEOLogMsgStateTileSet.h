
@interface GEOLogMsgStateTileSet : PBCodable <NSCopying> {
    NSMutableArray * _tileSetInfos;
}

@property (nonatomic, retain) NSMutableArray *tileSetInfos;

+ (bool)isValid:(id)arg1;
+ (Class)tileSetInfoType;

- (void).cxx_destruct;
- (void)addTileSetInfo:(id)arg1;
- (void)clearTileSetInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
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
- (void)setTileSetInfos:(id)arg1;
- (id)tileSetInfoAtIndex:(unsigned long long)arg1;
- (id)tileSetInfos;
- (unsigned long long)tileSetInfosCount;
- (void)writeTo:(id)arg1;

@end

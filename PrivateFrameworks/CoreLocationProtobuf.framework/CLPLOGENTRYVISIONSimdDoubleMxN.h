
@interface CLPLOGENTRYVISIONSimdDoubleMxN : PBCodable <NSCopying> {
    NSMutableArray * _columns;
}

@property (nonatomic, retain) NSMutableArray *columns;

+ (Class)columnsType;

- (void).cxx_destruct;
- (void)addColumns:(id)arg1;
- (void)clearColumns;
- (id)columns;
- (id)columnsAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setColumns:(id)arg1;
- (void)writeTo:(id)arg1;

@end

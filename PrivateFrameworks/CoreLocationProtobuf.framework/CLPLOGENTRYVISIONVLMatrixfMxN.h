
@interface CLPLOGENTRYVISIONVLMatrixfMxN : PBCodable <NSCopying> {
    NSMutableArray * _rows;
}

@property (nonatomic, retain) NSMutableArray *rows;

+ (Class)rowsType;

- (void).cxx_destruct;
- (void)addRows:(id)arg1;
- (void)clearRows;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rows;
- (id)rowsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowsCount;
- (void)setRows:(id)arg1;
- (void)writeTo:(id)arg1;

@end

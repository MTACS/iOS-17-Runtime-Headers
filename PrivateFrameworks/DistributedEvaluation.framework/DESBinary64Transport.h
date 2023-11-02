
@interface DESBinary64Transport : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _datas;
}

@property (nonatomic, readonly) double*datas;
@property (nonatomic, readonly) unsigned long long datasCount;

- (void)addData:(double)arg1;
- (void)clearDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dataAtIndex:(unsigned long long)arg1;
- (double*)datas;
- (unsigned long long)datasCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDatas:(double*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

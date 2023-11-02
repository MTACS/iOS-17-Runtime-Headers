
@interface DESBinary32Transport : PBCodable <NSCopying> {
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _datas;
}

@property (nonatomic, readonly) float*datas;
@property (nonatomic, readonly) unsigned long long datasCount;

- (void)addData:(float)arg1;
- (void)clearDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)dataAtIndex:(unsigned long long)arg1;
- (float*)datas;
- (unsigned long long)datasCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDatas:(float*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

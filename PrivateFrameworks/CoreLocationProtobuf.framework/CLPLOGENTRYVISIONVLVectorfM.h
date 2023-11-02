
@interface CLPLOGENTRYVISIONVLVectorfM : PBCodable <NSCopying> {
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _values;
}

@property (nonatomic, readonly) float*values;
@property (nonatomic, readonly) unsigned long long valuesCount;

- (void)addValues:(float)arg1;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setValues:(float*)arg1 count:(unsigned long long)arg2;
- (float*)values;
- (float)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end


@interface CLPLOGENTRYVISIONSimdDoubleM : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _values;
}

@property (nonatomic, readonly) double*values;
@property (nonatomic, readonly) unsigned long long valuesCount;

- (void)addValues:(double)arg1;
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
- (void)setValues:(double*)arg1 count:(unsigned long long)arg2;
- (double*)values;
- (double)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end

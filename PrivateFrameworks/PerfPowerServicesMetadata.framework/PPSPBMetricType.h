
@interface PPSPBMetricType : PBCodable <NSCopying> {
    int  _category;
    struct { 
        unsigned int value : 1; 
        unsigned int category : 1; 
    }  _has;
    unsigned long long  _value;
}

@property (nonatomic) int category;
@property (nonatomic) bool hasCategory;
@property (nonatomic) bool hasValue;
@property (nonatomic) unsigned long long value;

- (int)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(unsigned long long)arg1;
- (unsigned long long)value;
- (void)writeTo:(id)arg1;

@end

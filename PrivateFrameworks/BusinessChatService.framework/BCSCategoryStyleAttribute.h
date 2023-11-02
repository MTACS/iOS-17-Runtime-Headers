
@interface BCSCategoryStyleAttribute : PBCodable <NSCopying> {
    struct { 
        unsigned int key : 1; 
        unsigned int value : 1; 
    }  _has;
    int  _key;
    int  _value;
}

@property (nonatomic) bool hasKey;
@property (nonatomic) bool hasValue;
@property (nonatomic) int key;
@property (nonatomic) int value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setKey:(int)arg1;
- (void)setValue:(int)arg1;
- (int)value;
- (void)writeTo:(id)arg1;

@end

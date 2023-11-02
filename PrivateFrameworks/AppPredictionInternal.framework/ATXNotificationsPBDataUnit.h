
@interface ATXNotificationsPBDataUnit : PBCodable <NSCopying> {
    struct { 
        unsigned int value : 1; 
    }  _has;
    NSString * _key;
    float  _value;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) float value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(float)arg1;
- (float)value;
- (void)writeTo:(id)arg1;

@end

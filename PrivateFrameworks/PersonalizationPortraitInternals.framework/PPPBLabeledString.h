
@interface PPPBLabeledString : PBCodable <NSCopying> {
    NSString * _label;
    NSString * _value;
}

@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end

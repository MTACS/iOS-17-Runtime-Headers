
@interface _INPBWellnessMetadataPair : PBCodable <NSCopying, NSSecureCoding, _INPBWellnessMetadataPair> {
    struct { }  _has;
    _INPBString * _key;
    _INPBWellnessMetadataValue * _value;
    _INPBValueMetadata * _valueMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBString *key;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBWellnessMetadataValue *value;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasKey;
- (bool)hasValue;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)value;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end

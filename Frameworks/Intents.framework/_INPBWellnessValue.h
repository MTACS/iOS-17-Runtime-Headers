
@interface _INPBWellnessValue : PBCodable <NSCopying, NSSecureCoding, _INPBWellnessValue> {
    struct { }  _has;
    _INPBInteger * _ordinalValue;
    _INPBDouble * _pbDoubleValue;
    _INPBValueMetadata * _valueMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasOrdinalValue;
@property (nonatomic, readonly) bool hasPbDoubleValue;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBInteger *ordinalValue;
@property (nonatomic, retain) _INPBDouble *pbDoubleValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasOrdinalValue;
- (bool)hasPbDoubleValue;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)ordinalValue;
- (id)pbDoubleValue;
- (bool)readFrom:(id)arg1;
- (void)setOrdinalValue:(id)arg1;
- (void)setPbDoubleValue:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end


@interface _INPBWellnessMetadataValue : PBCodable <NSCopying, NSSecureCoding, _INPBWellnessMetadataValue> {
    struct { }  _has;
    _INPBInteger * _ordinalValue;
    _INPBDouble * _pbDoubleValue;
    _INPBString * _pbStringValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasOrdinalValue;
@property (nonatomic, readonly) bool hasPbDoubleValue;
@property (nonatomic, readonly) bool hasPbStringValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBInteger *ordinalValue;
@property (nonatomic, retain) _INPBDouble *pbDoubleValue;
@property (nonatomic, retain) _INPBString *pbStringValue;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasOrdinalValue;
- (bool)hasPbDoubleValue;
- (bool)hasPbStringValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)ordinalValue;
- (id)pbDoubleValue;
- (id)pbStringValue;
- (bool)readFrom:(id)arg1;
- (void)setOrdinalValue:(id)arg1;
- (void)setPbDoubleValue:(id)arg1;
- (void)setPbStringValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end

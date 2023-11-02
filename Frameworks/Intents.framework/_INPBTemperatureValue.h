
@interface _INPBTemperatureValue : PBCodable <NSCopying, NSSecureCoding, _INPBTemperatureValue> {
    struct { 
        unsigned int magnitude : 1; 
        unsigned int unit : 1; 
    }  _has;
    double  _magnitude;
    int  _unit;
    _INPBValueMetadata * _valueMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasMagnitude;
@property (nonatomic) bool hasUnit;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic) double magnitude;
@property (readonly) Class superclass;
@property (nonatomic) int unit;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsUnit:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMagnitude;
- (bool)hasUnit;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)magnitude;
- (bool)readFrom:(id)arg1;
- (void)setHasMagnitude:(bool)arg1;
- (void)setHasUnit:(bool)arg1;
- (void)setMagnitude:(double)arg1;
- (void)setUnit:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)unit;
- (id)unitAsString:(int)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end

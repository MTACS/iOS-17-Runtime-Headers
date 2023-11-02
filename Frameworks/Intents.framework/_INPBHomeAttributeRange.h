
@interface _INPBHomeAttributeRange : PBCodable <NSCopying, NSSecureCoding, _INPBHomeAttributeRange> {
    struct { 
        unsigned int lowerValue : 1; 
        unsigned int upperValue : 1; 
    }  _has;
    double  _lowerValue;
    double  _upperValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLowerValue;
@property (nonatomic) bool hasUpperValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lowerValue;
@property (readonly) Class superclass;
@property (nonatomic) double upperValue;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLowerValue;
- (bool)hasUpperValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)lowerValue;
- (bool)readFrom:(id)arg1;
- (void)setHasLowerValue:(bool)arg1;
- (void)setHasUpperValue:(bool)arg1;
- (void)setLowerValue:(double)arg1;
- (void)setUpperValue:(double)arg1;
- (double)upperValue;
- (void)writeTo:(id)arg1;

@end

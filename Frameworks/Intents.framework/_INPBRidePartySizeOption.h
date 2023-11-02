
@interface _INPBRidePartySizeOption : PBCodable <NSCopying, NSSecureCoding, _INPBRidePartySizeOption> {
    struct { }  _has;
    _INPBRangeValue * _partySizeRange;
    _INPBPriceRangeValue * _priceRange;
    NSString * _sizeDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPartySizeRange;
@property (nonatomic, readonly) bool hasPriceRange;
@property (nonatomic, readonly) bool hasSizeDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBRangeValue *partySizeRange;
@property (nonatomic, retain) _INPBPriceRangeValue *priceRange;
@property (nonatomic, copy) NSString *sizeDescription;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPartySizeRange;
- (bool)hasPriceRange;
- (bool)hasSizeDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)partySizeRange;
- (id)priceRange;
- (bool)readFrom:(id)arg1;
- (void)setPartySizeRange:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)setSizeDescription:(id)arg1;
- (id)sizeDescription;
- (void)writeTo:(id)arg1;

@end

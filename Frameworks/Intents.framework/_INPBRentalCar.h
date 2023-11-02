
@interface _INPBRentalCar : PBCodable <NSCopying, NSSecureCoding, _INPBRentalCar> {
    struct { }  _has;
    NSString * _make;
    NSString * _model;
    NSString * _rentalCarDescription;
    NSString * _rentalCompanyName;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMake;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic, readonly) bool hasRentalCarDescription;
@property (nonatomic, readonly) bool hasRentalCompanyName;
@property (nonatomic, readonly) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *make;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *rentalCarDescription;
@property (nonatomic, copy) NSString *rentalCompanyName;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMake;
- (bool)hasModel;
- (bool)hasRentalCarDescription;
- (bool)hasRentalCompanyName;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)make;
- (id)model;
- (bool)readFrom:(id)arg1;
- (id)rentalCarDescription;
- (id)rentalCompanyName;
- (void)setMake:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRentalCarDescription:(id)arg1;
- (void)setRentalCompanyName:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end

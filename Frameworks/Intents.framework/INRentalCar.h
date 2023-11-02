
@interface INRentalCar : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _make;
    NSString * _model;
    NSString * _rentalCarDescription;
    NSString * _rentalCompanyName;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *make;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *rentalCarDescription;
@property (nonatomic, readonly, copy) NSString *rentalCompanyName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRentalCompanyName:(id)arg1 type:(id)arg2 make:(id)arg3 model:(id)arg4 rentalCarDescription:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)make;
- (id)model;
- (id)rentalCarDescription;
- (id)rentalCompanyName;
- (id)type;

@end

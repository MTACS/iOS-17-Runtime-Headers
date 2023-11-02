
@interface _INPBListCarsIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBListCarsIntentResponse> {
    NSArray * _cars;
    struct { }  _has;
}

@property (nonatomic, copy) NSArray *cars;
@property (nonatomic, readonly) unsigned long long carsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)carsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCars:(id)arg1;
- (id)cars;
- (id)carsAtIndex:(unsigned long long)arg1;
- (unsigned long long)carsCount;
- (void)clearCars;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCars:(id)arg1;
- (void)writeTo:(id)arg1;

@end

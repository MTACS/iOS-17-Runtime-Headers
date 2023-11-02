
@interface _INPBAirline : PBCodable <NSCopying, NSSecureCoding, _INPBAirline> {
    struct { }  _has;
    NSString * _iataCode;
    NSString * _icaoCode;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIataCode;
@property (nonatomic, readonly) bool hasIcaoCode;
@property (nonatomic, readonly) bool hasName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *iataCode;
@property (nonatomic, copy) NSString *icaoCode;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIataCode;
- (bool)hasIcaoCode;
- (bool)hasName;
- (unsigned long long)hash;
- (id)iataCode;
- (id)icaoCode;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setIataCode:(id)arg1;
- (void)setIcaoCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end


@interface INAirport : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _iataCode;
    NSString * _icaoCode;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *iataCode;
@property (nonatomic, readonly, copy) NSString *icaoCode;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

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
- (id)iataCode;
- (id)icaoCode;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 iataCode:(id)arg2 icaoCode:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;

@end

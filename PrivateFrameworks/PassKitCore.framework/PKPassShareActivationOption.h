
@interface PKPassShareActivationOption : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    unsigned long long  _type;
    NSString * _value;
    long long  _valueLength;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSString *localizationKeyPostfix;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSString *value;
@property (nonatomic) long long valueLength;

+ (bool)supportsSecureCoding;
+ (id)vehicleEnteredPin;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCarKeyIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultIdentifierForType:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassShareActivationOption:(id)arg1;
- (id)localizationKeyPostfix;
- (id)localizedName;
- (void)setIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (void)setValueLength:(long long)arg1;
- (unsigned long long)type;
- (id)value;
- (long long)valueLength;

@end

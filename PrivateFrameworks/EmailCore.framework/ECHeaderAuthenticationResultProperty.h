
@interface ECHeaderAuthenticationResultProperty : NSObject {
    NSString * _fullProperty;
    unsigned long long  _hash;
    NSString * _property;
    NSString * _propertyType;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *fullProperty;
@property (nonatomic, readonly, copy) NSString *property;
@property (nonatomic, readonly, copy) NSString *propertyType;
@property (nonatomic, readonly, copy) NSString *value;

- (void).cxx_destruct;
- (id)fullProperty;
- (id)initWithPropertyType:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)property;
- (id)propertyType;
- (id)value;

@end

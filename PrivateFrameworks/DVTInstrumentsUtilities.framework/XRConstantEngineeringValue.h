
@interface XRConstantEngineeringValue : NSObject <NSCopying, NSSecureCoding, XREngineeringValue> {
    unsigned char  _implClass;
    NSString * _mnemonic;
    unsigned short  _resolvedEtypeID;
    id  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned short engineeringType;
@property (nonatomic, readonly) NSString *engineeringTypeMnemonic;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned char implClass;
@property (readonly) Class superclass;

+ (id)engineeringValueOfType:(id)arg1 value:(id)arg2;
+ (id)engineeringValueWithTypeID:(unsigned short)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)engineeringType;
- (id)engineeringTypeMnemonic;
- (void)enumerateUint64Values:(id /* block */)arg1;
- (double)fixedDecimal;
- (bool)getLengthOfUint64Representation:(unsigned long long*)arg1;
- (bool)getValue:(id*)arg1 fieldIndex:(unsigned short)arg2;
- (unsigned long long)hash;
- (unsigned char)implClass;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConstantEngineeringValue:(id)arg1;
- (bool)isValid;
- (id)objectValue;
- (id)string;
- (unsigned int)uint32;
- (unsigned long long)uint64;

@end

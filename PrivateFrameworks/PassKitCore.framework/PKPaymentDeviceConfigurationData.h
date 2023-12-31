
@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding> {
    bool  _devSigned;
    NSNumber * _primaryJSBLSequenceCounter;
    NSString * _secureElementIdentifier;
}

@property (nonatomic) bool devSigned;
@property (nonatomic, copy) NSNumber *primaryJSBLSequenceCounter;
@property (nonatomic, copy) NSString *secureElementIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)devSigned;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)primaryJSBLSequenceCounter;
- (id)secureElementIdentifier;
- (void)setDevSigned:(bool)arg1;
- (void)setPrimaryJSBLSequenceCounter:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;

@end


@interface PKPaymentSetupProductPaymentOption : NSObject <NSSecureCoding> {
    long long  _cardType;
    unsigned long long  _priority;
    long long  _supportedProtocols;
}

@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) long long supportedProtocols;

+ (bool)supportsSecureCoding;

- (long long)cardType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentOptionDictionary:(id)arg1;
- (unsigned long long)priority;
- (long long)supportedProtocols;

@end

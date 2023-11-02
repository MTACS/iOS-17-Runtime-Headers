
@interface AMSCardSingleSelection : NSObject <NSSecureCoding> {
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
}

@property (nonatomic, copy) NSString *passSerialNumber;
@property (nonatomic, copy) NSString *passTypeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassTypeIdentifier:(id)arg1 passSerialNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (void)setPassSerialNumber:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;

@end

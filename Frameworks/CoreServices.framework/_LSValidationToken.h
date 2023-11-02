
@interface _LSValidationToken : NSObject <NSSecureCoding> {
    NSData * _HMAC;
    NSData * _nonce;
    id  _owner;
    NSData * _payload;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end


@interface CoreIDV.DigitalPresentmentRequest : NSObject <NSSecureCoding> {
    void context;
    void descriptor;
    void merchantID;
    void nonce;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end


@interface PKProxCardRequest : NSObject <NSSecureCoding> {
    long long  _proxCardType;
}

@property (nonatomic, readonly) long long proxCardType;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProxCardType:(long long)arg1;
- (long long)proxCardType;

@end

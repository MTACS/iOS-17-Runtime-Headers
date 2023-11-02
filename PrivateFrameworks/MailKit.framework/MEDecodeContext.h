
@interface MEDecodeContext : NSObject <NSSecureCoding> {
    long long  _decodeReason;
}

@property (nonatomic) long long decodeReason;

+ (bool)supportsSecureCoding;

- (long long)decodeReason;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDecodeReason:(long long)arg1;
- (void)setDecodeReason:(long long)arg1;

@end

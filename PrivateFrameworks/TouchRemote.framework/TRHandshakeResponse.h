
@interface TRHandshakeResponse : TRResponseMessage {
    long long  _protocolVersion;
}

@property (nonatomic) long long protocolVersion;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)protocolVersion;
- (void)setProtocolVersion:(long long)arg1;

@end

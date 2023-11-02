
@interface LNSystemEntityProtocol : NSObject <NSSecureCoding> {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;

+ (id)allProtocols;
+ (id)allProtocolsByIdentifier;
+ (id)mailAccountProtocol;
+ (id)mailAddresseeProtocol;
+ (id)mailMessageProtocol;
+ (id)mailboxProtocol;
+ (id)protocolWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

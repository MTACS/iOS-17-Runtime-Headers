
@interface MEDecodedMessage : NSObject <NSSecureCoding> {
    MEDecodedMessageBanner * _banner;
    NSData * _context;
    NSData * _rawData;
    MEMessageSecurityInformation * _securityInformation;
}

@property (nonatomic, readonly) MEDecodedMessageBanner *banner;
@property (nonatomic, readonly) NSData *context;
@property (nonatomic, readonly, copy) NSData *rawData;
@property (nonatomic, readonly) MEMessageSecurityInformation *securityInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)banner;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 securityInformation:(id)arg2 context:(id)arg3;
- (id)initWithData:(id)arg1 securityInformation:(id)arg2 context:(id)arg3 banner:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)rawData;
- (id)securityInformation;

@end


@interface SGXPCResponse1 : SGXPCResponse {
    <NSSecureCoding> * _response1;
}

@property (nonatomic, readonly) <NSSecureCoding> *response1;

+ (id)responseWith:(id)arg1;
+ (id)responseWithError:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)response1;
- (void)setResponse1:(id)arg1;

@end

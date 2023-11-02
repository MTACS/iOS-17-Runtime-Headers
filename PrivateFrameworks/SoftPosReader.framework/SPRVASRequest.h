
@interface SPRVASRequest : NSObject <NSSecureCoding> {
    NSString * _merchantId;
    NSData * _vasFilter;
    NSNumber * _vasTerminalProtocol;
    NSURL * _vasUrl;
}

@property (copy) NSString *merchantId;
@property (copy) NSData *vasFilter;
@property (copy) NSNumber *vasTerminalProtocol;
@property (copy) NSURL *vasUrl;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVasTerminalProtocol:(id)arg1 merchantId:(id)arg2 vasUrl:(id)arg3 vasFilter:(id)arg4;
- (id)merchantId;
- (void)setMerchantId:(id)arg1;
- (void)setVasFilter:(id)arg1;
- (void)setVasTerminalProtocol:(id)arg1;
- (void)setVasUrl:(id)arg1;
- (id)vasFilter;
- (id)vasTerminalProtocol;
- (id)vasUrl;

@end

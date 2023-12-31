
@interface TRSetupNetworkRequest : TRRequestMessage {
    NSString * _networkPassword;
    NSString * _networkSSID;
}

@property (nonatomic, copy) NSString *networkPassword;
@property (nonatomic, copy) NSString *networkSSID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)networkPassword;
- (id)networkSSID;
- (void)setNetworkPassword:(id)arg1;
- (void)setNetworkSSID:(id)arg1;

@end

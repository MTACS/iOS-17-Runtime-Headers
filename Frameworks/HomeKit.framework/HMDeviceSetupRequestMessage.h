
@interface HMDeviceSetupRequestMessage : TRRequestMessage {
    NSData * _payload;
    long long  _qualityOfService;
}

@property (nonatomic, readonly, copy) NSData *payload;
@property (nonatomic) long long qualityOfService;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)payload;
- (long long)qualityOfService;
- (void)setQualityOfService:(long long)arg1;

@end

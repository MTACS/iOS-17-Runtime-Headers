
@interface AATrustedDeviceListRequest : AARequest {
    AAGrandSlamSigner * _grandSlamSigner;
    NSString * _heartbeatToken;
}

@property (nonatomic, copy) NSString *heartbeatToken;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)heartbeatToken;
- (id)initWithURLString:(id)arg1 accountStore:(id)arg2 grandSlamAccount:(id)arg3;
- (void)setHeartbeatToken:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end

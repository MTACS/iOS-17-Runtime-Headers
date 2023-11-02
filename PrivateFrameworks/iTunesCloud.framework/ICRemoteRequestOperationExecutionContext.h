
@interface ICRemoteRequestOperationExecutionContext : NSObject <NSSecureCoding> {
    long long  _qualityOfService;
    ICRemoteRequestOperation * _remoteRequestOperation;
}

@property (nonatomic) long long qualityOfService;
@property (nonatomic, readonly) ICRemoteRequestOperation *remoteRequestOperation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteRequestOperation:(id)arg1;
- (long long)qualityOfService;
- (id)remoteRequestOperation;
- (void)setQualityOfService:(long long)arg1;

@end

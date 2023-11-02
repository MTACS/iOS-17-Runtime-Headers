
@interface CDMWarmupResponseCommand : CDMServiceGraphCommand {
    NSString * _serviceName;
    long long  _serviceState;
}

@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) long long serviceState;

- (void).cxx_destruct;
- (id)initWithServiceState:(long long)arg1 serviceName:(id)arg2;
- (id)serviceName;
- (long long)serviceState;

@end

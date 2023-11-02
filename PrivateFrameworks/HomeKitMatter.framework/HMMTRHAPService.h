
@interface HMMTRHAPService : HAPService {
    NSNumber * _endpoint;
}

@property (nonatomic, retain) NSNumber *endpoint;

+ (id)chipPluginServiceForCharacteristic:(id)arg1;

- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5 endpoint:(id)arg6;
- (void)setEndpoint:(id)arg1;

@end

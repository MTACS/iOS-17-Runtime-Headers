
@interface HMDNetworkRouterClientControlOperation : NSObject <HAPTLVProtocol, NSCopying> {
    HMDNetworkRouterClientConfiguration * _configuration;
    HMDNetworkRouterControlOperation * _operation;
}

@property (nonatomic, retain) HMDNetworkRouterClientConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterControlOperation *operation;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithOperation:(id)arg1 configuration:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)operation;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setOperation:(id)arg1;

@end

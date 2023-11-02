
@interface HMDNetworkRouterClientControlOperationResponse : NSObject <HAPTLVProtocol, NSCopying> {
    HMDNetworkRouterClientConfiguration * _configuration;
    HMDNetworkRouterControlOperationStatus * _status;
}

@property (nonatomic, retain) HMDNetworkRouterClientConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterControlOperationStatus *status;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithStatus:(id)arg1 configuration:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end

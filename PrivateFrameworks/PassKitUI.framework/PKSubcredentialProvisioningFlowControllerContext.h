
@interface PKSubcredentialProvisioningFlowControllerContext : NSObject <NSCopying> {
    NSError * _error;
    long long  _flowType;
    PKPaymentWebService * _localDeviceWebService;
    PKPaymentPass * _provisionedPass;
    PKPaymentPass * _provisionedRemotePass;
    PKPaymentWebService * _remoteDeviceWebService;
    bool  _shouldExitFlowOnError;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) long long flowType;
@property (nonatomic, retain) PKPaymentWebService *localDeviceWebService;
@property (nonatomic, retain) PKPaymentPass *provisionedPass;
@property (nonatomic, retain) PKPaymentPass *provisionedRemotePass;
@property (nonatomic, retain) PKPaymentWebService *remoteDeviceWebService;
@property (nonatomic, readonly) long long setupContext;
@property (nonatomic) bool shouldExitFlowOnError;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)error;
- (long long)flowType;
- (id)initWithFlowType:(long long)arg1;
- (id)localDeviceWebService;
- (id)provisionedPass;
- (id)provisionedRemotePass;
- (id)remoteDeviceWebService;
- (void)setError:(id)arg1;
- (void)setLocalDeviceWebService:(id)arg1;
- (void)setProvisionedPass:(id)arg1;
- (void)setProvisionedRemotePass:(id)arg1;
- (void)setRemoteDeviceWebService:(id)arg1;
- (void)setShouldExitFlowOnError:(bool)arg1;
- (long long)setupContext;
- (bool)shouldExitFlowOnError;

@end

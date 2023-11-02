
@interface AFContextDonationService : NSObject <AFContextDonation, AFDeviceContextConnectionDelegate> {
    AFDeviceContextConnection * _connection;
    <AFContextDonation> * _donationService;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _transformersByType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultService;

- (void).cxx_destruct;
- (id)_connection;
- (id)_init;
- (void)deviceContextConnectionDidInvalidate:(id)arg1;
- (void)donateContext:(id)arg1 withMetadata:(id)arg2 pushToRemote:(bool)arg3;
- (void)donateContext:(id)arg1 withMetadata:(id)arg2 pushToRemote:(bool)arg3 completion:(id /* block */)arg4;
- (void)registerContextTransformer:(id)arg1 forType:(id)arg2;
- (void)setDonationService:(id)arg1;

@end

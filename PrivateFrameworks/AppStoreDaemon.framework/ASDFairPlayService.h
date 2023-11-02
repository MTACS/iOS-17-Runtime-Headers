
@interface ASDFairPlayService : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultService;
+ (id)interface;

- (void).cxx_destruct;
- (id)generateKeybagRequestForDSID:(unsigned long long)arg1 error:(id*)arg2;
- (id)generateSubscriptionRequestForDSID:(unsigned long long)arg1 error:(id*)arg2;
- (bool)importKeybag:(id)arg1 error:(id*)arg2;
- (bool)importSubscriptionKeybag:(id)arg1 error:(id*)arg2;

@end

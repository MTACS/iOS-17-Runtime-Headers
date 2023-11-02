
@interface CoreMLModelSecurityServiceToClient : NSObject <CoreMLModelSecurityServiceToClientProtocol> {
    NSCountedSet * _featureProviderCount;
    NSMutableDictionary * _featureProviderMap;
    NSObject<OS_dispatch_queue> * _serviceToClientQueue;
}

@property (nonatomic, retain) NSCountedSet *featureProviderCount;
@property (nonatomic, retain) NSMutableDictionary *featureProviderMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serviceToClientQueue;

- (void).cxx_destruct;
- (void)clientFeatureNames:(id)arg1 withReply:(id /* block */)arg2;
- (void)clientFeatureValueForName:(id)arg1 uniqueKeyForProvider:(id)arg2 withReply:(id /* block */)arg3;
- (id)featureProviderCount;
- (id)featureProviderMap;
- (id)init;
- (id)serviceToClientQueue;
- (void)setFeatureProviderCount:(id)arg1;
- (void)setFeatureProviderMap:(id)arg1;
- (void)setServiceToClientQueue:(id)arg1;

@end

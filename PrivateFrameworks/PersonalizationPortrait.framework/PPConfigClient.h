
@interface PPConfigClient : NSObject {
    PPXPCClientHelper * _clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (unsigned long long)assetVersionWithError:(id*)arg1;
- (id)init;
- (id)readableTrialTreatmentsMappingWithError:(id*)arg1;
- (id)variantNameWithError:(id*)arg1;

@end

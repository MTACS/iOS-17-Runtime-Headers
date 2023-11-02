
@interface SSUIServiceClient : NSObject {
    FBSServiceFacilityClient * _facilityClient;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendRequest:(id)arg1 withCompletion:(id /* block */)arg2;

@end

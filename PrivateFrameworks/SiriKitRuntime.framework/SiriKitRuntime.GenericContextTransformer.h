
@interface SiriKitRuntime.GenericContextTransformer : NSObject <AFContextSnapshotTransforming>

- (void).cxx_destruct;
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(id /* block */)arg4;
- (id)init;

@end

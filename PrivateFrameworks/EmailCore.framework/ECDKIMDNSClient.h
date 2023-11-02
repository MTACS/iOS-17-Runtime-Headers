
@interface ECDKIMDNSClient : NSObject <ECDKIMPublicKeySource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)getPublicKeyRecordsFromDomain:(id)arg1 withSelector:(id)arg2 completionHandler:(id /* block */)arg3;

@end

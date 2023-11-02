
@interface MKGETPlaceholderRouter : NSObject <MKHTTPRouter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;

@end


@interface ACDClientProvider : NSObject <ACDClientProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createClientForConnection:(id)arg1;

@end

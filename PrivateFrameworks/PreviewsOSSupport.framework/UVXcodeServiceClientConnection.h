
@interface UVXcodeServiceClientConnection : UVBSConnection <UVBSClientConnection, UVXcodeServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createWithVariant:(long long)arg1 error:(id*)arg2;

- (void)activate;
- (oneway void)sendMessage:(id)arg1 reply:(id /* block */)arg2;

@end

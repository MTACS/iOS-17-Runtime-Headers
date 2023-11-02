
@protocol HMDIDSService <NSObject>

@required

- (NSSet *)accounts;
- (void)addDelegate:(id <HMDIDSServiceDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (IDSDevice *)deviceForFromID:(NSString *)arg1;
- (NSArray *)devices;
- (NSArray *)hmd_handles;
- (bool)hmd_isActive;
- (HMDAccountHandle *)hmd_preferredHandle;
- (IDSAccount *)iCloudAccount;
- (void)removeDelegate:(id <HMDIDSServiceDelegate>)arg1;
- (bool)reportSpamMessage:(NSDictionary *)arg1;
- (void)retrieveFirewallWithQueue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IDSFirewall *, NSError *, void*
- (bool)sendMessage:(NSDictionary *)arg1 fromAccount:(IDSAccount *)arg2 toDestinations:(NSSet *)arg3 priority:(long long)arg4 options:(NSDictionary *)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendMessage:(NSDictionary *)arg1 toDestinations:(NSSet *)arg2 priority:(long long)arg3 options:(NSDictionary *)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendResourceAtURL:(NSURL *)arg1 metadata:(NSDictionary *)arg2 toDestinations:(NSSet *)arg3 priority:(long long)arg4 options:(NSDictionary *)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (NSString *)serviceIdentifier;
- (void)setLinkPreferences:(NSDictionary *)arg1;
- (bool)setWakingPushPriority:(long long)arg1 error:(id*)arg2;

@end

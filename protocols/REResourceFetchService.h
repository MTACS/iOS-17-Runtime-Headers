
@protocol REResourceFetchService <NSObject>

@required

- (void)associateConnectionWithPeerID:(unsigned long long)arg1;
- (void)resourceAtAssetPath:(NSString *)arg1 payloadDidUpdate:(RESharedResourcePayload *)arg2 error:(NSError *)arg3;

@end

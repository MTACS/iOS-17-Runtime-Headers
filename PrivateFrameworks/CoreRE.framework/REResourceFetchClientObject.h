
@interface REResourceFetchClientObject : NSObject <REResourceFetchService> {
    int  _pid;
    int  _pidversion;
    void * _resourceFetchManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) int pidversion;
@property (nonatomic, readonly, copy) NSString *redactedDescription;
@property (nonatomic, readonly) void*resourceFetchManager;
@property (readonly) Class superclass;

- (void)associateConnectionWithPeerID:(unsigned long long)arg1;
- (id)description;
- (id)initWithResourceFetchManager:(void*)arg1 connection:(const struct Connection { id x1; }*)arg2;
- (void)invalidate;
- (int)pid;
- (int)pidversion;
- (id)redactedDescription;
- (void)resourceAtAssetPath:(id)arg1 payloadDidUpdate:(id)arg2 error:(id)arg3;
- (void*)resourceFetchManager;

@end

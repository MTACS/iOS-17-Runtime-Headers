
@protocol LiveFSConnectionCoordination

@required

- (void)invalidateAllConnections;
- (void)invalidateFileNodesForConnection:(unsigned long long)arg1;
- (unsigned long long)newConnectionIDOrError:(id*)arg1;
- (void)releaseConnectionAllocation:(unsigned long long)arg1;

@end

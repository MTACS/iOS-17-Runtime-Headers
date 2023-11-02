
@protocol PDSDaemonListenerVendor <NSObject>

@required

- (<PDSRemoteInternal> *)remoteInternalListener;
- (<PDSRemote> *)remoteListenerForAllClientIDs;
- (<PDSRemote> *)remoteListenerForClientIDs:(NSArray *)arg1;

@end

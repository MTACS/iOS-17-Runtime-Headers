
@protocol VTPeerRemoteConnectionDelegate <NSObject>

@required

- (void)remoteConnection:(void *)arg1 handleMessageType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: VTPeerRemoteConnection *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBCodable *, NSError *, void*

@end

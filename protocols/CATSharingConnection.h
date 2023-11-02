
@protocol CATSharingConnection <NSObject>

@required

- (void)close;
- (NSError *)closedError;
- (<CATSharingConnectionDelegate> *)delegate;
- (bool)isClosed;
- (CATSharingDevice *)remoteDevice;
- (void)sendData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDelegate:(id <CATSharingConnectionDelegate>)arg1;

@end

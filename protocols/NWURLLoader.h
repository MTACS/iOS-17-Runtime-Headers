
@protocol NWURLLoader <NSObject>

@required

- (bool)allowsWrite;
- (NSObject<OS_sec_trust> *)peerTrust;
- (void)readDataOfMinimumIncompleteLength:(void *)arg1 maximumLength:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_dispatch_data> *, bool, NSError *, void*
- (void)readResponse:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLResponse *, NSError *, void*
- (void)responseIsMixed;
- (void)start:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stop;
- (NSObject<OS_nw_connection> *)underlyingConnection;
- (void)updateClient:(id <NWURLLoaderClient>)arg1;
- (void)writeData:(void *)arg1 complete:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSObject<OS_dispatch_data> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end


@protocol PLAssetsdServiceProtocol <PLAssetsdServiceCreating, PLAssetsdDirectServiceProtocol>

@required

- (void)bindToPhotoLibraryURL:(void *)arg1 sandboxExtension:(void *)arg2 clientOptions:(void *)arg3 withReply:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSData *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)bindToPhotoLibraryURL:(void *)arg1 sandboxExtension:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)runDaemonJob:(PLDaemonJob *)arg1 isSerial:(bool)arg2;
- (void)runDaemonJob:(void *)arg1 isSerial:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: PLDaemonJob *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, PLDaemonJobReply *, void*

@end


@protocol LiveFSVolumeManager

@required

- (void)addDisk:(void *)arg1 fileSystemType:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)addDisk:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addShimForFileSystemType:(void *)arg1 parameters:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, NSString *, void*
- (void)addVolume:(void *)arg1 atServer:(void *)arg2 credentialType:(void *)arg3 credential:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addVolume:(void *)arg1 listener:(void *)arg2 description:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSXPCListenerEndpoint *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)credentialTypes:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)ejectDisk:(void *)arg1 usingFlags:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)ejectVolume:(void *)arg1 usingFlags:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)listVolumes:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)listenerForVolume:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)sharesAtServer:(void *)arg1 credentialType:(void *)arg2 credential:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)uniqueNameForName:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)unlockVolume:(void *)arg1 password:(void *)arg2 saveToKeychain:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

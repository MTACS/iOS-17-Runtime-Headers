
@protocol NSFileProviderLiveItemCore <LiveFSVolumeCore>

@required

- (void)LIGetAttr:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)LIGetFsAttr:(void *)arg1 name:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)LIGetParentsAndAttributesForFileIDs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDictionary *, void*
- (void)LIGetRootFileHandle:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)LILookup:(void *)arg1 name:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 12: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSString *, NSData *, NSData *, unsigned int, void*
- (void)LISearch:(void *)arg1 token:(void *)arg2 criteria:(void *)arg3 resumeAt:(void *)arg4 maxData:(void *)arg5 maxDelay:(void *)arg6 initialCredits:(void *)arg7 reply:(void *)arg8; // needs 8 arg types, found 13: NSString *, NSString *, NSDictionary *, NSString *, unsigned int, double, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)LISearchAbort:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end

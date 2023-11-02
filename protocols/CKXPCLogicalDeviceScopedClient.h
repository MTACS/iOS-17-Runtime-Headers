
@protocol CKXPCLogicalDeviceScopedClient

@required

- (void)addThrottle:(CKThrottle *)arg1;
- (void)openFileWithOpenInfo:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CKFileOpenInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKFileOpenResult *, NSError *, void*
- (void)readBytesOfInMemoryAssetContentWithUUID:(void *)arg1 offset:(void *)arg2 length:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)resetThrottles;

@end


@protocol CKXPCProcessScopedClient

@required

- (void)getFileMetadataWithFileHandle:(void *)arg1 openInfo:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSFileHandle *, CKFileOpenInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKFileMetadata *, NSError *, void*
- (void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(NSString *)arg2;
- (void)noteSystemIsAvailable;

@end

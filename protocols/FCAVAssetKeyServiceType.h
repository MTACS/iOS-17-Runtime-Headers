
@protocol FCAVAssetKeyServiceType

@required

- (void)fetchAppCertificateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchContentKeyWithURI:(void *)arg1 spcData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSDate *, NSError *, void*

@end

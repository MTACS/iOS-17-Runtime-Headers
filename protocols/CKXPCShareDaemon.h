
@protocol CKXPCShareDaemon <NSObject>

@required

- (void)handleCloudKitShareMetadata:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (oneway void)willAcceptShareAtURL:(NSURL *)arg1;

@end

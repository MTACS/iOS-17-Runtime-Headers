
@protocol PLAssetsdLibraryManagementServiceProtocol <NSObject>

@required

- (void)closeAndDeletePhotoLibraryAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)closePhotoLibraryAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)filesystemSizeForLibraryURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 11: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, unsigned long long, unsigned long long, NSError *, void*
- (void)getActivePhotoLibrariesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)getPhotoLibraryURLsWithLibraryURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 10: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSURL *, NSArray *, NSError *, void*
- (void)getPhotosXPCEndpointWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSXPCListenerEndpoint *, NSError *, void*
- (void)resetSyndicationLibraryWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setSystemPhotoLibraryURL:(void *)arg1 sandboxExtension:(void *)arg2 options:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSData *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

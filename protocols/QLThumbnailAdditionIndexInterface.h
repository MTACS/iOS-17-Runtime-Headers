
@protocol QLThumbnailAdditionIndexInterface

@required

- (void)addThumbnailForURLWrapper:(void *)arg1 size:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: FPSandboxingURLWrapper *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)hasThumbnailForURLWrapper:(void *)arg1 updateLastHitDate:(void *)arg2 andSize:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: FPSandboxingURLWrapper *, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeAllAdditions;
- (void)removeThumbnailForURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)retrieveAllAdditions:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)updateFileSize:(void *)arg1 ofThumbnailForURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateLastHitDate:(void *)arg1 ofThumbnailForURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDate *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

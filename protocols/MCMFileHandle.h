
@protocol MCMFileHandle <NSObject, MCMFileHandleHasXattrs, MCMFileHandleHasOwnership>

@required

- (void)close;
- (NSNumber *)createDPClass;
- (unsigned short)createMode;
- (unsigned long long)direction;
- (bool)openLazily;
- (bool)openWithError:(id*)arg1;
- (NSString *)path;
- (<MCMFileHandle> *)relativeToFileHandle;
- (unsigned long long)symlinks;
- (bool)withOpenFileDoBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSError *, void*

@end

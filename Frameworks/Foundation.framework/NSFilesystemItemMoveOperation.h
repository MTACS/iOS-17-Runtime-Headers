
@interface NSFilesystemItemMoveOperation : NSOperation {
    id  _delegate;
    NSURL * _destinationURL;
    NSError * _error;
    unsigned long long  _options;
    NSURL * _sourceURL;
}

+ (id)_errorWithErrno:(int)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3;
+ (id)filesystemItemMoveOperationWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3;

- (void)_setError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (bool)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3;
- (void)main;
- (void)setDelegate:(id)arg1;

@end

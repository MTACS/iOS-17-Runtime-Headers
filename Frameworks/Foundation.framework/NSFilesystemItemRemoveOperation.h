
@interface NSFilesystemItemRemoveOperation : NSOperation {
    NSError * _error;
    NSFileManager * _fm;
    NSString * _removePath;
    void * _state;
}

@property (readonly) NSFileManager *fileManager;

+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
+ (id)filesystemItemRemoveOperationWithPath:(id)arg1 fileManager:(id)arg2;

- (bool)_delegateSaysProceedAfterError:(id)arg1 removingItemAtPath:(id)arg2;
- (bool)_delegateSaysShouldRemoveItemAtPath:(id)arg1;
- (void)_setError:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)fileManager;
- (id)initWithPath:(id)arg1 fileManager:(id)arg2;
- (void)main;

@end

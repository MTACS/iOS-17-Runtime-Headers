
@interface PUReviewFileManager : NSObject {
    NSObject<OS_dispatch_queue> * __fileManagementQueue;
    NSFileManager * __fileManager;
    NSURL * __safePathURL;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_fileManagementQueue;
@property (nonatomic, readonly) NSFileManager *_fileManager;
@property (nonatomic, readonly) NSURL *_safePathURL;

+ (id)defaultManager;

- (void).cxx_destruct;
- (bool)_allowedToDeleteItemAtURL:(id)arg1;
- (id)_fileManagementQueue;
- (id)_fileManager;
- (bool)_removeItemAtURL:(id)arg1 error:(id*)arg2 stackshot:(id)arg3;
- (id)_safePathURL;
- (id)initWithFileManager:(id)arg1;
- (void)removeItemAtURL:(id)arg1 completion:(id /* block */)arg2;
- (bool)removeItemAtURL:(id)arg1 error:(id*)arg2;

@end

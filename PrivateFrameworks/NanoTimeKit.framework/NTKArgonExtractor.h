
@interface NTKArgonExtractor : NSObject <NTKArgonExtractorProviding> {
    NSMapTable * _extractionCallbacksByDescriptor;
    NSString * _extractionPath;
    NSString * _inProgressPath;
    NTKArgonExtractorOperation * _performingOperation;
    NSMutableOrderedSet * _queuedKeyDescriptorOperations;
    NSMapTable * _removalCallbacksByDescriptor;
    NSString * _sourcePath;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMapTable *extractionCallbacksByDescriptor;
@property (nonatomic, readonly) NSString *extractionPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKArgonExtractorOperation *performingOperation;
@property (nonatomic, readonly) NSMutableOrderedSet *queuedKeyDescriptorOperations;
@property (nonatomic, readonly) NSMapTable *removalCallbacksByDescriptor;
@property (nonatomic, readonly) NSString *sourcePath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)_createUnprotectedDirectoryAtPath:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_queue_extractKeyDescriptor:(id)arg1;
- (void)_queue_extractUsingKeyDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_performNextOperationIfNeeded;
- (void)_queue_removeKeyDescriptor:(id)arg1;
- (void)_queue_removeKeyDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)extractUsingKeyDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)extractionCallbacksByDescriptor;
- (id)extractionPath;
- (id)initWithSourcePath:(id)arg1 inProgressPath:(id)arg2 extractionPath:(id)arg3;
- (id)performingOperation;
- (id)queuedKeyDescriptorOperations;
- (id)removalCallbacksByDescriptor;
- (void)removeExtractedKeyDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)setPerformingOperation:(id)arg1;
- (id)sourcePath;
- (id)workQueue;

@end

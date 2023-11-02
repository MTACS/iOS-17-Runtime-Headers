
@interface FPDCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSOperationQueue * _coordinationQueue;
    NSMutableSet * _currentlyAccessedURLs;
    FPDExtensionManager * _extensionManager;
    NSFileCoordinator * _fileCoordinator;
}

@property (nonatomic, readonly) FPDExtensionManager *extensionManager;

+ (id)requestForClaimID:(id)arg1;

- (void).cxx_destruct;
- (id)_readingIntentWithURL:(id)arg1 materializeOption:(unsigned long long)arg2;
- (void)cancel;
- (void)coordinateAtURL:(id)arg1 recursively:(bool)arg2 request:(id)arg3 handler:(id /* block */)arg4;
- (void)coordinateForCopyingFromURL:(id)arg1 toURL:(id)arg2 request:(id)arg3 handler:(id /* block */)arg4;
- (void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 request:(id)arg3 handler:(id /* block */)arg4;
- (void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 toTargetFolderURL:(id)arg3 targetMaterializeOption:(unsigned long long)arg4 sourceMaterializeOption:(unsigned long long)arg5 request:(id)arg6 handler:(id /* block */)arg7;
- (void)dealloc;
- (id)extensionManager;
- (id)initWithExtensionManager:(id)arg1 callbackQueue:(id)arg2;
- (void)resolveItem:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveItem:(id)arg1 recursively:(bool)arg2 request:(id)arg3 andCoordinateWithHandler:(id /* block */)arg4;
- (void)resolveItemOrURL:(id)arg1 recursively:(bool)arg2 coordinateIfExport:(bool)arg3 request:(id)arg4 handler:(id /* block */)arg5;
- (void)resolveItemOrURL:(id)arg1 recursively:(bool)arg2 request:(id)arg3 andCoordinateWithHandler:(id /* block */)arg4;
- (void)startAccessingURLForAtomDuration:(id)arg1;
- (void)stopAccessingAllURLs;
- (void)stopAccessingURL:(id)arg1;

@end

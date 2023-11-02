
@interface PLTCCObserver : NSObject {
    PLPhotoLibraryBundleController * _libraryBundleController;
    NSObject<OS_dispatch_queue> * _observerQueue;
}

- (void).cxx_destruct;
- (void)_handleTCCEvent:(unsigned long long)arg1 auth_record:(id)arg2;
- (id)_systemPhotoLibrary;
- (id)initWithLibraryBundleController:(id)arg1;
- (void)registerAsTCCObserver;

@end

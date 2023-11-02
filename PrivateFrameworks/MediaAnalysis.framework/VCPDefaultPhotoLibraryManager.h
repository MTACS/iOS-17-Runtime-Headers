
@interface VCPDefaultPhotoLibraryManager : NSObject <PHPhotoLibraryAvailabilityObserver> {
    PHPhotoLibrary * _defaultPhotoLibrary;
    NSURL * _defaultPhotoLibraryURL;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)closedefaultPhotoLibrary;
- (id)defaultPhotoLibrary;
- (id)init;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;

@end

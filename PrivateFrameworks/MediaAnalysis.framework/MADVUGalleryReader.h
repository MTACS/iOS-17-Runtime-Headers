
@interface MADVUGalleryReader : NSObject {
    NSObject<OS_dispatch_queue> * _operationQueue;
    NSURL * _storageURL;
    GDVUVisualUnderstandingService * _vuService;
}

+ (id)sharedGalleryWithPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)flush;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)queryKeyObservationsFor:(long long)arg1 limit:(long long)arg2 offset:(long long)arg3;

@end


@interface PGPhotoKitMemoryTrigger : PGMemoryTrigger {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2;
- (id)photoLibrary;

@end

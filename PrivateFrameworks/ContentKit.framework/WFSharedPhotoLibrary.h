
@interface WFSharedPhotoLibrary : NSObject <PHPhotoLibraryAvailabilityObserver> {
    PHPhotoLibrary * _systemPhotoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PHPhotoLibrary *systemPhotoLibrary;

+ (id)sharedLibrary;

- (void).cxx_destruct;
- (id)fetchOptionsWithError:(id*)arg1;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)setSystemPhotoLibrary:(id)arg1;
- (id)systemPhotoLibrary;
- (id)systemPhotoLibraryWithError:(id*)arg1;

@end

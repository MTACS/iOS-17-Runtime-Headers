
@interface PGMemoryCurationSession : NSObject {
    CLSCurationContext * _curationContext;
    PGCurationManager * _curationManager;
    PGGraphLocationHelper * _locationHelper;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) CLSCurationContext *curationContext;
@property (nonatomic, readonly) PGCurationManager *curationManager;
@property (nonatomic, readonly) PGGraphLocationHelper *locationHelper;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)curationContext;
- (id)curationManager;
- (id)initWithCurationManager:(id)arg1 photoLibrary:(id)arg2 curationContext:(id)arg3 locationHelper:(id)arg4;
- (id)locationHelper;
- (id)photoLibrary;

@end

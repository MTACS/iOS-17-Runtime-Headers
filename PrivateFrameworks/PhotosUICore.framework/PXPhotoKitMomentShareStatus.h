
@interface PXPhotoKitMomentShareStatus : PXMomentShareStatus {
    PXCMMMomentShareInvitation * _invitation;
}

- (void).cxx_destruct;
- (id)_createStatusProvider;
- (void)_prepareFetchResultsForPhotoLibrary:(id)arg1;
- (id)initWithPhotoKitMomentShare:(id)arg1;
- (id)invitation;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end

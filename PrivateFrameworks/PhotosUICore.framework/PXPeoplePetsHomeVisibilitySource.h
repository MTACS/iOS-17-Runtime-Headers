
@interface PXPeoplePetsHomeVisibilitySource : NSObject <PXPhotoLibraryUIChangeObserver> {
    void defaults;
    void humans;
    void pets;
    void visibility;
}

@property (nonatomic) unsigned long long visibility;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (unsigned long long)visibility;

@end


@interface _PXStoryRecipePhotoKitLibraryReference : PFStoryConcreteRecipeLibrary {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithKind:(long long)arg1 url:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;

@end

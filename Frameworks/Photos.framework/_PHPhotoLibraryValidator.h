
@interface _PHPhotoLibraryValidator : PHValidator {
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)isValidImagePathExtension:(id)arg1;
- (bool)isValidVideoPathExtension:(id)arg1;
- (id)photoLibrary;

@end

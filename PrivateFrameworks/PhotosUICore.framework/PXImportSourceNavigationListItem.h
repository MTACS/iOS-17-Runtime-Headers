
@interface PXImportSourceNavigationListItem : PXNavigationListItem {
    PHImportSource * _importSource;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) PHImportSource *importSource;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)accessoryGlyphImageName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)glyphImageName;
- (unsigned long long)hash;
- (id)image;
- (id)importSource;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3;
- (id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2;
- (bool)isRemovable;
- (id)photoLibrary;
- (id)representedObject;

@end

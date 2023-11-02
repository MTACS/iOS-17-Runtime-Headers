
@interface PXPeopleDetailSettingsKeyFacesDataSource : NSObject <PXPeopleDetailSettingsDataSource> {
    NSArray * _keyFaces;
    PHPhotoLibrary * _photoLibrary;
    NSString * _qualityProperty;
    NSString * _title;
}

@property (nonatomic, readonly) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMoreDetails;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *keyFaces;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSString *qualityProperty;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (long long)action;
- (unsigned long long)faceCount:(long long)arg1;
- (bool)hasMoreDetails;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 resultHandler:(id /* block */)arg4;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletionBlock:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 keyFaces:(id)arg2 qualityProperty:(id)arg3 photoLibrary:(id)arg4;
- (id)keyFaces;
- (id)modelObjectForIndex:(long long)arg1;
- (unsigned long long)numberOfItems;
- (id)personNameAtIndex:(long long)arg1;
- (id)photoLibrary;
- (id)qualityProperty;
- (void)setTitle:(id)arg1;
- (id)title;
- (long long)verifyTypeAtIndex:(long long)arg1;

@end

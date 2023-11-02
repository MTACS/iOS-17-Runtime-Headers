
@interface PXPhotosLayoutState : NSObject <NSCopying> {
    PXAssetReference * _anchorAssetReference;
    <PXPhotosSectionBodyLayoutProvider> * _bodyProvider;
    <PXPhotosSectionHeaderLayoutProvider> * _headerProvider;
}

@property (nonatomic, retain) PXAssetReference *anchorAssetReference;
@property (nonatomic, retain) <PXPhotosSectionBodyLayoutProvider> *bodyProvider;
@property (nonatomic, retain) <PXPhotosSectionHeaderLayoutProvider> *headerProvider;

- (void).cxx_destruct;
- (id)anchorAssetReference;
- (id)bodyProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)headerProvider;
- (void)setAnchorAssetReference:(id)arg1;
- (void)setBodyProvider:(id)arg1;
- (void)setHeaderProvider:(id)arg1;

@end


@interface PXPhotosGridMessagesBodyLayoutProvider : NSObject <PXChangeObserver, PXGItemsLayoutDelegate, PXPhotosSectionBodyLayoutProvider> {
    <PXAssetImportStatusManager> * _assetImportStatusManager;
    PXPhotosGridMessagesLayoutSpecManager * _specManager;
    <PXTapbackStatusManager> * _tapbackStatusManager;
    <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> * invalidationDelegate;
}

@property (nonatomic, readonly) <PXAssetImportStatusManager> *assetImportStatusManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> *invalidationDelegate;
@property (nonatomic, readonly) PXPhotosGridMessagesLayoutSpecManager *specManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXTapbackStatusManager> *tapbackStatusManager;

- (void).cxx_destruct;
- (id)assetImportStatusManager;
- (void)configureSectionBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 forSectionedLayout:(id)arg3;
- (id)createSectionBodyLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 spec:(id)arg4 outWantsDecoration:(bool*)arg5;
- (id)initWithViewModel:(id)arg1;
- (id)invalidationDelegate;
- (double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;
- (long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2 options:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })itemsLayout:(id)arg1 marginForItem:(long long)arg2;
- (id)itemsLayout:(id)arg1 objectReferenceForItem:(long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)sectionedLayout:(id)arg1 bodyLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 hasSectionChanges:(bool)arg5;
- (void)setInvalidationDelegate:(id)arg1;
- (bool)shouldPreventFaultOutOfBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2;
- (id)specManager;
- (id)tapbackStatusManager;

@end

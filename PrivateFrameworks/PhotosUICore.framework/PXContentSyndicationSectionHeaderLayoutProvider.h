
@interface PXContentSyndicationSectionHeaderLayoutProvider : NSObject <PXPhotosSectionHeaderLayoutProvider> {
    PXPhotosViewModel * _viewModel;
    <PXPhotosSectionHeaderLayoutViewProvider> * _viewProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *invalidationDelegate;
@property (readonly) Class superclass;
@property (nonatomic) <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *topHeaderInvalidationDelegate;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;
@property (nonatomic, readonly) <PXPhotosSectionHeaderLayoutViewProvider> *viewProvider;

- (void).cxx_destruct;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 spec:(id)arg4 outAlignment:(unsigned long long*)arg5;
- (id)init;
- (id)initWithViewModel:(id)arg1 viewProvider:(id)arg2;
- (void)sectionedLayout:(id)arg1 headerLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 hasSectionChanges:(bool)arg5;
- (id)viewModel;
- (id)viewProvider;

@end

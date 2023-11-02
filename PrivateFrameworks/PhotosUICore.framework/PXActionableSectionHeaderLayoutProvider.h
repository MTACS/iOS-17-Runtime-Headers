
@interface PXActionableSectionHeaderLayoutProvider : NSObject <PXActionableSectionHeaderLayoutInteractionDelegate, PXGSingleViewLayoutDelegate, PXPhotosSectionHeaderLayoutProvider> {
    UIImage * _gradientImage;
    <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> * _invalidationDelegate;
    PXActionableSectionHeaderView * _referenceHeaderView;
    <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> * _topHeaderInvalidationDelegate;
    PXPhotosViewModel * _viewModel;
    <PXPhotosSectionHeaderLayoutViewProvider> * _viewProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImage *gradientImage;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *invalidationDelegate;
@property (nonatomic, readonly) PXActionableSectionHeaderView *referenceHeaderView;
@property (readonly) Class superclass;
@property (nonatomic) <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *topHeaderInvalidationDelegate;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;
@property (nonatomic, readonly) <PXPhotosSectionHeaderLayoutViewProvider> *viewProvider;

- (void).cxx_destruct;
- (id)_createSectionHeaderLayoutForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 spec:(id)arg3 outAlignment:(unsigned long long*)arg4;
- (void)_getPrimaryText:(id*)arg1 secondaryText:(id*)arg2 forLayout:(id)arg3;
- (id)actionTextForActionType:(long long)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (long long)actionTypeForHeaderLayout:(id)arg1;
- (id)configurationForSingleViewLayout:(id)arg1;
- (void)configureSectionHeaderLayout:(id)arg1 inAssetSectionLayout:(id)arg2 forSectionedLayout:(id)arg3;
- (void)configureTopHeaderLayout:(id)arg1 dataSource:(id)arg2 spec:(id)arg3;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 spec:(id)arg4 outAlignment:(unsigned long long*)arg5;
- (id)createTopHeaderLayoutForDataSource:(id)arg1 spec:(id)arg2 outShouldFloat:(bool*)arg3;
- (id)gradientImage;
- (id)init;
- (id)initWithViewModel:(id)arg1 viewProvider:(id)arg2;
- (id)invalidationDelegate;
- (id)primaryTextForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)primaryTopHeaderTextForDataSource:(id)arg1;
- (id)referenceHeaderView;
- (id)secondaryTextForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)secondaryTopHeaderTextForDataSource:(id)arg1;
- (void)sectionHeader:(id)arg1 didPressButtonForActionType:(long long)arg2 sender:(id)arg3;
- (void)sectionHeader:(id)arg1 didToggleSelectedState:(bool)arg2;
- (void)sectionedLayout:(id)arg1 headerLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 hasSectionChanges:(bool)arg5;
- (void)setInvalidationDelegate:(id)arg1;
- (void)setSelectedState:(bool)arg1 forItemsInSectionHeaderLayout:(id)arg2;
- (void)setTopHeaderInvalidationDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })singleViewLayout:(id)arg1 desiredSizeForReferenceSize:(struct CGSize { double x1; double x2; })arg2;
- (id)topHeaderInvalidationDelegate;
- (void)topHeaderLayout:(id)arg1 didChangeDataSource:(id)arg2;
- (id)viewModel;
- (id)viewProvider;
- (bool)wantsHeaderForDataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)wantsTopHeaderForDataSource:(id)arg1;

@end

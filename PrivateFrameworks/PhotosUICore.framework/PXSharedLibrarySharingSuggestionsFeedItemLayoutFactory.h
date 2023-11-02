
@interface PXSharedLibrarySharingSuggestionsFeedItemLayoutFactory : NSObject <PXFeedItemLayoutFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_configureLayout:(id)arg1 indexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 inDataSource:(id)arg3;
- (void)configureItemLayout:(id)arg1 forChangedItemFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 inDataSource:(id)arg3 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 inDataSource:(id)arg5;
- (id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 inDataSource:(id)arg2 viewModel:(id)arg3 initialReferenceSize:(struct CGSize { double x1; double x2; })arg4 thumbnailAsset:(out id*)arg5;

@end

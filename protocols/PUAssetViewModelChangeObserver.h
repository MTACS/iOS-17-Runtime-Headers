
@protocol PUAssetViewModelChangeObserver <PUViewModelChangeObserver>

@optional

- (void)viewModel:(PUAssetViewModel *)arg1 didChange:(PUAssetViewModelChange *)arg2;

@end

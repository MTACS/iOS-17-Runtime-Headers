
@protocol PUBrowsingViewModelChangeObserver <PUViewModelChangeObserver>

@optional

- (void)viewModel:(PUBrowsingViewModel *)arg1 didChange:(PUBrowsingViewModelChange *)arg2;

@end

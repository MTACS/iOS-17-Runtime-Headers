
@protocol PUViewModelChangeObserver <NSObject>

@optional

- (void)viewModel:(PUViewModel *)arg1 didChange:(PUViewModelChange *)arg2;

@end


@protocol PREditingContentStyleItemsDataSource <NSObject>

@required

- (double)contentsLuminance;
- (PREditingPosterContentStyleCoordinator *)coordinatorForIndex:(unsigned long long)arg1;
- (PREditingPosterContentStyleCoordinator *)firstCoordinatorPassingTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, PREditingPosterContentStyleCoordinator *, void*
- (unsigned long long)indexForCoordinator:(PREditingPosterContentStyleCoordinator *)arg1;
- (unsigned long long)numberOfCoordinators;
- (void)setContentsLuminance:(double)arg1;

@end

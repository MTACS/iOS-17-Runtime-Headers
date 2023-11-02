
@protocol PKHorizontalScrollingViewControllerDataSource <NSObject>

@required

- (id)cachedDataAtIndex:(long long)arg1;
- (void)didDequeueViewController:(UIViewController<PKHorizontalScrollingChildViewControllerProtocol> *)arg1;
- (void)didMoveToPrimaryIndex:(long long)arg1;
- (NSArray *)emptyViewControllers;
- (void)fetchDataAtIndex:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (UIView<PKHorizontalScrollingFooterViewProtocol> *)footerView;
- (double)footerViewContentHeight;
- (id)loadingDataObjectWithCurrentData:(id)arg1 index:(long long)arg2 swap:(bool)arg3;
- (long long)numberOfItems;
- (void)prefetchDataIfNecessary;
- (long long)startingIndex;

@end

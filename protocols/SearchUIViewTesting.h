
@protocol SearchUIViewTesting <NSObject>

@required

- (void)iterateIndexPaths:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFResultSection *, SFSearchResult *, SFCardSection *, NSIndexPath *, void*
- (UINavigationController *)navigationController;
- (long long)numberOfSections;
- (void)performRecapScrollTestWithTestName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performScrollTestWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performScrollTestWithHandlerForFirstScrollCompletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollToIndexPath:(NSIndexPath *)arg1;
- (void)setViewDidUpdateHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setViewWillUpdateHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)tapAtIndexPath:(NSIndexPath *)arg1;
- (void)toggleShowMoreForSection:(unsigned long long)arg1;
- (id /* block */)viewDidUpdateHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)viewWillUpdateHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL

@end

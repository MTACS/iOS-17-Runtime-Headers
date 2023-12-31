
@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController {
    SULoadingView * _loadingView;
}

- (bool)_addPurchaseBatch:(id)arg1 forIndexPath:(id)arg2;
- (void)_performPurchaseAnimationForIndexPath:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (id)newNoItemsOverlayLabel;
- (bool)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2;
- (bool)purchaseItemAtIndexPath:(id)arg1;
- (void)setSkLoading:(bool)arg1;

@end

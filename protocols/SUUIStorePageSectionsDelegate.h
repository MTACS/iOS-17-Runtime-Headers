
@protocol SUUIStorePageSectionsDelegate <NSObject>

@optional

- (bool)sectionsViewController:(SUUIStorePageSectionsViewController *)arg1 showProductPageForItem:(SUUIItem *)arg2;
- (bool)sectionsViewController:(SUUIStorePageSectionsViewController *)arg1 showStorePageForURL:(NSURL *)arg2;
- (void)sectionsViewController:(SUUIStorePageSectionsViewController *)arg1 willScrollToOffset:(struct CGPoint { double x1; double x2; })arg2 visibleRange:(struct SUUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg3;
- (void)sectionsViewControllerDidDismissOverlayController:(SUUIStorePageSectionsViewController *)arg1;
- (void)sectionsViewControllerDidScroll:(SUUIStorePageSectionsViewController *)arg1;

@end

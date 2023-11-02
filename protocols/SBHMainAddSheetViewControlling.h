
@protocol SBHMainAddSheetViewControlling <SBHWidgetSheetViewControlling, NSObject>

@required

- (NSArray *)applicationWidgetCollections;
- (NSArray *)disfavoredApplicationWidgetCollections;
- (NSArray *)favoredApplicationWidgetCollections;
- (unsigned long long)galleryLayoutSize;
- (<SBHWidgetSheetViewControllerPresenter> *)presenter;
- (void)setApplicationWidgetCollections:(NSArray *)arg1;
- (void)setDisfavoredApplicationWidgetCollections:(NSArray *)arg1;
- (void)setFavoredApplicationWidgetCollections:(NSArray *)arg1;
- (void)setGalleryLayoutSize:(unsigned long long)arg1;
- (void)setPresenter:(id <SBHWidgetSheetViewControllerPresenter>)arg1;
- (void)setSuggestedItems:(NSArray *)arg1 forGalleryLayoutSize:(unsigned long long)arg2;
- (NSArray *)suggestedItemsForGalleryLayoutSize:(unsigned long long)arg1;

@end

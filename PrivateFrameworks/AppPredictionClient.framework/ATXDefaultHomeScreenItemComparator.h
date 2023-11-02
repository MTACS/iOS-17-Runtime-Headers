
@interface ATXDefaultHomeScreenItemComparator : NSObject {
    ATXDefaultWidgetStack * _defaultStack;
    NSArray * _galleryItems;
}

@property (retain) ATXDefaultWidgetStack *defaultStack;
@property (retain) NSArray *galleryItems;

- (void).cxx_destruct;
- (id)defaultStack;
- (id)galleryItems;
- (bool)isStackDefaultStack:(id)arg1;
- (void)loadDefaultItemsWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)rankOfWidgetSuggestedInGallery:(id)arg1;
- (void)setDefaultStack:(id)arg1;
- (void)setGalleryItems:(id)arg1;

@end

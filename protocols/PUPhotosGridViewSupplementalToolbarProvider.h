
@protocol PUPhotosGridViewSupplementalToolbarProvider <NSObject>

@required

- (id)initWithDataSource:(id <PUPhotosGridViewSupplementalToolbarDataSource>)arg1;
- (bool)shouldShowToolbar;
- (NSArray *)toolbarItems;

@end

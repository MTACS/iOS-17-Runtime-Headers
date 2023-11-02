
@interface SUUISpacePageSection : SUUIStorePageSection

@property (nonatomic, readonly) SUUISpacePageComponent *pageComponent;

- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)willAppearInContext:(id)arg1;

@end

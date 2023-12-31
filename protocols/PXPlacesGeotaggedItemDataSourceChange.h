
@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>

@required

- (NSSet *)addedItems;
- (bool)hasChanges;
- (NSSet *)removedItems;
- (void)updateWithChange:(id <PXPlacesGeotaggedItemDataSourceChange>)arg1;
- (NSSet *)updatedItems;

@end


@interface CNPhotoPickerListDataSource : CNPhotoPickerDataSource

+ (double)getAddItemsSectionHeight;
+ (struct CGSize { double x1; double x2; })getSuggestionItemSize;
+ (id)symbolImageNameForAddItemType:(unsigned long long)arg1;

- (unsigned long long)itemsPerRowForSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;

@end

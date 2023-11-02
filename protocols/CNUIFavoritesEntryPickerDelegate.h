
@protocol CNUIFavoritesEntryPickerDelegate <NSObject>

@required

- (void)favoritesEntryPicker:(CNUIFavoritesEntryPicker *)arg1 didPickEntry:(CNFavoritesEntry *)arg2;

@optional

- (NSArray *)actionTypesForFavoritesEntryPicker:(CNUIFavoritesEntryPicker *)arg1;

@end

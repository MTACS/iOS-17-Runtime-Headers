
@interface CNContactAddFavoriteAction : CNPropertyAction <CNPropertyContextMenuAction, CNUIFavoritesEntryPickerDelegate> {
    CNFavorites * _favorites;
    CNUIFavoritesEntryPicker * _favoritesEntryPicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNFavorites *favorites;
@property (nonatomic, retain) CNUIFavoritesEntryPicker *favoritesEntryPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_saveFavorite:(id)arg1;
- (bool)canPerformAction;
- (id)favorites;
- (id)favoritesEntryPicker;
- (void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2 favorites:(id)arg3;
- (id /* block */)menuProviderForContextMenuInteraction:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)setFavoritesEntryPicker:(id)arg1;

@end


@interface PXFavoritesSettings : PXSettings {
    <PXFavoritesSettingsDelegate> * _delegate;
    bool  _didEncounterUnknownSettingsClassName;
    NSArray * _favoritesSettingsClassNames;
}

@property (nonatomic) <PXFavoritesSettingsDelegate> *delegate;
@property (nonatomic, copy) NSArray *favoritesSettingsClassNames;

+ (id)favoritesSubmoduleWithFavoritesSettingsKeyPath:(id)arg1 delegate:(id)arg2;
+ (id)sharedInstance;
+ (id)transientProperties;

- (void).cxx_destruct;
- (id)_keyForFavoriteExistingAtIndex:(long long)arg1;
- (id)_keyForFavoriteNameAtIndex:(long long)arg1;
- (void)_notifyChange;
- (void)_performBlockAfterLoadingAccessorySettings:(id /* block */)arg1;
- (void)_requestFavoriteSettingsAtIndex:(long long)arg1 fromViewController:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)delegate;
- (id)favoritesSettingsClassNames;
- (bool)isFavoriteSettings:(id)arg1;
- (id)parentSettings;
- (void)setDelegate:(id)arg1;
- (void)setFavoritesSettingsClassNames:(id)arg1;
- (void)setIsFavorite:(bool)arg1 settings:(id)arg2;
- (id)valueForKey:(id)arg1;

@end


@protocol WDFavoriteDisplayTypesControllerObserver <NSObject>

@optional

- (void)favoriteDisplayTypesControllerDidFail:(WDFavoriteDisplayTypesController *)arg1;
- (void)favoriteDisplayTypesControllerDidSuccessfullyPersist:(WDFavoriteDisplayTypesController *)arg1;
- (void)favoriteDisplayTypesControllerDidUpdate:(WDFavoriteDisplayTypesController *)arg1;
- (void)favoriteDisplayTypesControllerReady:(WDFavoriteDisplayTypesController *)arg1;

@end

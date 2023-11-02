
@interface HealthExperience.FavoritesMigrator : NSObject <WDFavoriteDisplayTypesControllerObserver> {
    void favoritesController;
    void favoritesManager;
    void keyValueDomain;
    void migrationCompletion;
}

- (void).cxx_destruct;
- (void)favoriteDisplayTypesControllerReady:(id)arg1;
- (id)init;

@end

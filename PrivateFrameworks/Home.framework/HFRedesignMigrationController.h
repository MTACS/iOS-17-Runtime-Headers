
@interface HFRedesignMigrationController : NSObject {
    HMHome * _home;
    NSArray * _legacyFavoriteTiles;
    NAFuture * _migrationFuture;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSArray *legacyFavoriteTiles;
@property (nonatomic, retain) NAFuture *migrationFuture;

+ (bool)homeNeedsMigration:(id)arg1;

- (void).cxx_destruct;
- (bool)_accessoryLikeItemIsHighValue:(id)arg1;
- (bool)_accessoryLikeObjectMustUseLargerSize:(id)arg1;
- (id)_clearHomeDashboardSectionOrder;
- (double)_computeUsageThreshold:(id)arg1;
- (id)_migrateFavorites;
- (id)_migrateRoomOrder;
- (id)_migrateServiceItemsOrderInRooms;
- (id)_migrateShowOnHomeDashboard;
- (id)_migrateTileSize;
- (void)_reduceScoreForRepeatingPattern:(id)arg1 accessoryScores:(id)arg2;
- (id)_sortAccessoriesInRoom:(id)arg1 fromScoreMap:(id)arg2;
- (void)_updateScoreForAccessoriesInGroup:(id)arg1 accessoryScores:(id)arg2 incrementBy:(long long)arg3 singleAccessoryIncrement:(long long)arg4;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)legacyFavoriteTiles;
- (id)migrationFuture;
- (void)performMigrationIfNeeded;
- (void)performMigrationSuccessTasks;
- (void)setMigrationFuture:(id)arg1;

@end


@interface WBFeatureManager : NSObject {
    long long  _accessLevel;
    bool  _favoritesFolderSelectionShouldSync;
    bool  _offlineReadingListAvailable;
}

@property (nonatomic, readonly) long long accessLevel;
@property (nonatomic, readonly) bool favoritesFolderSelectionShouldSync;
@property (getter=isOfflineReadingListAvailable, nonatomic, readonly) bool offlineReadingListAvailable;

+ (id)sharedFeatureManager;

- (void)_updateToAccessLevel:(long long)arg1;
- (long long)accessLevel;
- (bool)favoritesFolderSelectionShouldSync;
- (id)init;
- (bool)isOfflineReadingListAvailable;

@end

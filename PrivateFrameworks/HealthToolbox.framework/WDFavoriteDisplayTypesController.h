
@interface WDFavoriteDisplayTypesController : NSObject {
    bool  _cycleTrackingSummaryFavorited;
    NSMutableSet * _favoritedDisplayTypes;
    HKHealthStore * _healthStore;
    HKObserverSet * _observers;
    bool  _shouldPersistChanges;
    bool  _shouldRecoverFromErrors;
    long long  _state;
    WDUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) bool hasLoadedInitialState;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic) bool shouldRecoverFromErrors;

+ (long long)cycleTrackingSummaryFavoritedIdentifier;

- (void).cxx_destruct;
- (void)_alertObserversControllerReady;
- (void)_alertObserversDidFail;
- (void)_alertObserversDidSuccessfullyPersist;
- (void)_alertObserversDidUpdate;
- (id)_displayTypeIdentifiersFromDisplayTypes:(id)arg1;
- (void)_fetchUserDefaultsIfNecessary;
- (void)_handleFetchError:(id)arg1;
- (void)_handleFetchSuccess:(id)arg1;
- (bool)_needsFetch;
- (void)_persistFavoritedDisplayTypes;
- (void)_recoverFromFailureStateIfNecessary;
- (bool)cycleTrackingSummaryIsFavorited;
- (bool)displayTypeIsFavorited:(id)arg1;
- (id)favoritedDisplayTypes;
- (void)fetchFavorites;
- (bool)hasLoadedInitialState;
- (id)healthStore;
- (id)initWithWDUserDefaults:(id)arg1 healthStore:(id)arg2 shouldPersistChanges:(bool)arg3;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)removeAllFavorites;
- (void)setCycleTrackingSummaryFavorited:(bool)arg1;
- (void)setIsFavorited:(bool)arg1 displayType:(id)arg2;
- (void)setIsFavorited:(bool)arg1 displayTypes:(id)arg2;
- (void)setShouldRecoverFromErrors:(bool)arg1;
- (bool)shouldRecoverFromErrors;
- (void)unregisterObserver:(id)arg1;
- (void)userHasUpdatedFavortiesWithCompletion:(id /* block */)arg1;
- (void)userUpdatedFavorites;

@end

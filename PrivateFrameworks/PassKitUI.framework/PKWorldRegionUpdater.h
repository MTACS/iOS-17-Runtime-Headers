
@interface PKWorldRegionUpdater : NSObject {
    PKWorldRegion * _currentRegionToGeocode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockRegionsToGeocode;
    NSHashTable * _observers;
    NSMutableSet * _regionIdentifiersToGeocode;
    NSMutableSet * _regionsFailedToGeocode;
    NSMutableArray * _regionsToGeocode;
    NSObject<OS_dispatch_queue> * _replyQueue;
    PKSearchService * _searchService;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (void)_beginReverseGeocodingIfPossible;
- (void)addObserver:(id)arg1;
- (id)initWithSearchService:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)updateCoordinatesForWorldRegionIfNeeded:(id)arg1;

@end

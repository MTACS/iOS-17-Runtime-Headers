
@interface GEOTransitVehicleUpdateRequester : NSObject {
    NSMutableSet * _inflightTripIds;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inflightTripIdsLock;
    unsigned long long  _maxRetries;
    unsigned long long  _numRetries;
    NSMutableSet * _processedTripIds;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processedTripIdsLock;
    double  _requestInterval;
    <GEOMapServiceTicket> * _ticket;
    NSTimer * _updateTimer;
    NSHashTable * _updaters;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _updatersLock;
}

@property (nonatomic, readonly) NSMutableSet *processedTripIds;
@property (nonatomic, readonly) NSHashTable *updaters;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelRequestIfNeeded;
- (void)_cancelUpdateTimer;
- (void)_handleMapItems:(id)arg1 error:(id)arg2 forTripIDs:(id)arg3;
- (void)_processTripIds;
- (void)_purgeAllObjects;
- (void)_removeTripIdsIfApplicable:(id)arg1;
- (void)_scheduleUpdateTimerWithInterval:(double)arg1;
- (void)_sendRequestForTripIds:(id)arg1;
- (id)_tripIdsForUpdaters:(id)arg1 filteredTripIDs:(bool*)arg2;
- (id)initPrivate;
- (void)mockProcessedIds:(id)arg1;
- (id)processedTripIds;
- (void)registerVehicleUpdater:(id)arg1;
- (void)unregisterVehicleUpdater:(id)arg1;
- (id)updaters;

@end

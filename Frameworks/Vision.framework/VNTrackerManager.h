
@interface VNTrackerManager : NSObject {
    NSMutableDictionary * _liveTrackerCounter;
    NSDictionary * _liveTrackerCounterLimit;
    NSMapTable * _trackerClassToNameMapTable;
    NSDictionary * _trackerTypeToClassDictionary;
    NSMutableDictionary * _trackers;
    NSObject<OS_dispatch_queue> * _trackersCollectionManagementQueue;
    NSObject<OS_dispatch_queue> * _trackingProcessingQueue;
}

- (void).cxx_destruct;
- (id)_createTracker:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)_getTracker:(id)arg1;
- (long long)_maximumTrackersOfType:(id)arg1;
- (void)_releaseTracker_NO_LOCK_DO_NOT_EXECUTE_DIRECTLY:(id)arg1;
- (id)_supportedComputeDeviceTypesForTrackerType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)init;

@end

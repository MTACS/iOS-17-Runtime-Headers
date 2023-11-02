
@interface PLCameraCaptureTaskConstraints : NSObject <PFStateCaptureProvider> {
    id  _mstreamdPauseContext;
    PFStateCaptureHandler * _stateHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _taskConstraintCoordinatorLock;
    NSMutableSet * _taskConstraintCoordinators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedTaskConstraints;

- (void).cxx_destruct;
- (id)init;
- (void)startConstrainingTasksWithCoordinator:(id)arg1;
- (id)stateCaptureDictionary;
- (void)stopConstrainingTasksWithCoordinator:(id)arg1;
- (id)taskConstraintStatus;

@end

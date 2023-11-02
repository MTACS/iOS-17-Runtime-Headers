
@interface VNFrameworkManager : NSObject <VNLegacyForcedCleanupImplementing, VNMTLDeviceWisdomParametersProviding> {
    NSRecursiveLock * _detectorAccessingLock;
    VisionCoreObjectCache * _detectorDescriptorsCache;
    NSNotificationCenter * _notificationCenter;
    VNWeakTypeWrapperCollection * _sessions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sessionsAccessLock;
    NSRecursiveLock * _trackerResourcesAccessingLock;
    VNMTLDeviceWisdomParameters * _wisdomParameters;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _wisdomParametersLock;
}

@property (readonly, copy) NSArray *allSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <NSLocking> *detectorAccessingLock;
@property (readonly) VisionCoreObjectCache *detectorDescriptorsCache;
@property (readonly) unsigned long long hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (readonly) <NSLocking> *trackerResourcesAccessingLock;

+ (id)manager;

- (void).cxx_destruct;
- (id)_locateDetectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 inSessions:(id)arg3 excludingSession:(id)arg4;
- (id)_locateTrackerResourcesConfiguredWithOptions:(id)arg1 inSessions:(id)arg2 excludingSession:(id)arg3;
- (id)allSessions;
- (id)detectorAccessingLock;
- (id)detectorDescriptorsCache;
- (id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 forSession:(id)arg3 error:(id*)arg4;
- (id)init;
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)arg1;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)arg1;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)arg1;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)arg1;
- (void)legacyForcedCleanupWithOptions:(id)arg1;
- (id)loadedDetectors;
- (id)notificationCenter;
- (void)registerSession:(id)arg1;
- (void)releaseMetalDeviceWisdomParameters;
- (id)trackerResourcesAccessingLock;
- (id)trackerResourcesConfiguredWithOptions:(id)arg1 forSession:(id)arg2 error:(id*)arg3;
- (id)wisdomParameterForMTLDevice:(id)arg1 error:(id*)arg2;
- (id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id*)arg2;

@end

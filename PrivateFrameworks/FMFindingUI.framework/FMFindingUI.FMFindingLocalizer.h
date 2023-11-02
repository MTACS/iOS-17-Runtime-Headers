
@interface FMFindingUI.FMFindingLocalizer : NSObject {
    void delegateTrampoline;
    void findableStatesByUUID;
    void findingTechnology;
    void localizer;
    void mockIndex;
    void nearbyInteractionManager;
    void nearbyInteractionManagerSubscription;
    void poseProvider;
    void preciseDistancesByUUID;
    void productUUIDsByFindableUUID;
    void proximityManager;
    void proximityManagerSubscription;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end

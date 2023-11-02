
@interface FMFindingUI.FMR1ProximityManagerSubscription : NSObject {
    void context;
    void findable;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void poseProvider;
    void subscriber;
    void wantsLocalizer;
    void wantsRangingOnly;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end

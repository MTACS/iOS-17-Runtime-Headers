
@interface FMFindingUI.FMNearbyInteractionManagerSubscription : NSObject {
    void context;
    void findable;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void subscriber;
    void wantsSession;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end

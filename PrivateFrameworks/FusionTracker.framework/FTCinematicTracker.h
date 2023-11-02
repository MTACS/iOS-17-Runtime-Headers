
@interface FTCinematicTracker : NSObject {
    struct shared_ptr<ft::CinematicTracker> { 
        struct CinematicTracker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tracker;
}

+ (id)highPriorityExemplarNetworkDescriptor;
+ (id)highPriorityInstanceNetworkDescriptor;
+ (id)tapToBoxNetworkDescriptor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeTrackingStateForInput:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

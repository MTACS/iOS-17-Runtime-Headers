
@interface REActivityTracker : NSObject {
    NSCountedSet * _activities;
    NSMapTable * _activitiesByObject;
    <REActivityTrackerDelegate> * _delegate;
    struct { 
        unsigned int implementsBeginActivity : 1; 
        unsigned int implementsEndActivity : 1; 
        unsigned int implementsBeginActivityForObject : 1; 
        unsigned int implementsEndActivityForObject : 1; 
    }  delegateCallbacks;
}

@property (nonatomic, readonly) <REActivityTrackerDelegate> *delegate;
@property (nonatomic, readonly) NSSet *outstandingActivities;

- (void).cxx_destruct;
- (void)beginActivity:(id)arg1 forObject:(id)arg2;
- (id)delegate;
- (void)endActivity:(id)arg1 forObject:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)outstandingActivities;
- (id)outstandingActivitiesForObject:(id)arg1;
- (void)trackObject:(id)arg1;
- (bool)trackingObject:(id)arg1;
- (void)withdrawObject:(id)arg1;

@end

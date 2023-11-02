
@interface GCApplicationStateMonitor : NSObject <GCFrontmostApplicationObserverDelegate> {
    BKSApplicationStateMonitor * _bksStateMonitor;
    int  _frontmostApplication;
    NSString * _frontmostApplicationIdentifier;
    NSMapTable * _observerToPIDs;
    NSMutableDictionary * _pidToBundleIdentifier;
    NSMutableDictionary * _pidToCanReceiveEvents;
    NSMapTable * _pidToObservers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frontmostApplication;
@property (nonatomic, retain) NSString *frontmostApplicationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forProcessIdentifier:(int)arg2;
- (bool)applicationCanReceiveEvents:(int)arg1;
- (void)dealloc;
- (int)frontmostApplication;
- (id)frontmostApplicationIdentifier;
- (id)init;
- (void)initializeForegroundMonitor;
- (void)initializeStateMonitor;
- (void)onFrontmostApplicationChanged:(int)arg1;
- (void)removeApplicationFromCanReceiveEventsMonitoring:(int)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forProcessIdentifier:(int)arg2;
- (void)setApplicationCanReceiveEvents:(bool)arg1 forPID:(int)arg2;
- (void)setFrontmostApplication:(int)arg1;
- (void)setFrontmostApplicationIdentifier:(id)arg1;
- (void)updateInterestedBundleIDs;

@end

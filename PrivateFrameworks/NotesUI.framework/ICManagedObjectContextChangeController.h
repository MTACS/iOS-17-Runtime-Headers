
@interface ICManagedObjectContextChangeController : NSObject {
    <ICManagedObjectContextChangeControllerDelegate> * _delegate;
    NSSet * _managedObjectContexts;
    NSMutableSet * _needsUpdateManagedObjectIDs;
    NSObject<OS_dispatch_queue> * _needsUpdateManagedObjectIDsSerialQueue;
    unsigned long long  _objectTypes;
    double  _updateInterval;
    ICSelectorDelayer * _updateSelectorDelayer;
}

@property (nonatomic) <ICManagedObjectContextChangeControllerDelegate> *delegate;
@property (nonatomic, retain) NSSet *managedObjectContexts;
@property (nonatomic, retain) NSMutableSet *needsUpdateManagedObjectIDs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *needsUpdateManagedObjectIDsSerialQueue;
@property (nonatomic, readonly) NSSet *objectTypeKeys;
@property (nonatomic) unsigned long long objectTypes;
@property (nonatomic) double updateInterval;
@property (nonatomic, retain) ICSelectorDelayer *updateSelectorDelayer;

- (void).cxx_destruct;
- (void)_performUpdatesIfNeeded;
- (void)addObservers;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)initWithManagedObjectContexts:(id)arg1 delegate:(id)arg2;
- (void)managedObjectContextObjectsDidChange:(id)arg1;
- (id)managedObjectContexts;
- (id)needsUpdateManagedObjectIDs;
- (id)needsUpdateManagedObjectIDsSerialQueue;
- (id)objectTypeKeys;
- (unsigned long long)objectTypes;
- (void)performUpdatesIfNeeded;
- (void)performUpdatesIfNeededAndWait;
- (void)removeObservers;
- (void)setDelegate:(id)arg1;
- (void)setManagedObjectContexts:(id)arg1;
- (void)setNeedsUpdateManagedObjectIDs:(id)arg1;
- (void)setNeedsUpdateManagedObjectIDsSerialQueue:(id)arg1;
- (void)setObjectTypes:(unsigned long long)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)setUpdateSelectorDelayer:(id)arg1;
- (double)updateInterval;
- (id)updateSelectorDelayer;

@end

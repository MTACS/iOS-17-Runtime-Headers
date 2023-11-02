
@interface CRAccNavProvider : NSObject <ACCNavigationProviderProtocol> {
    NSMutableDictionary * _accessoriesIndexed;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessoryLock;
    NSMutableDictionary * _activeAccessoryComponentsIndexed;
    NSMutableDictionary * _activeComponentsIndexed;
    <CRAccNavProviderDelegate> * _delegate;
    ACCNavigationProvider * _iapNavigation;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableDictionary *accessoriesIndexed;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } accessoryLock;
@property (nonatomic, retain) NSMutableDictionary *activeAccessoryComponentsIndexed;
@property (nonatomic, readonly) NSArray *activeComponents;
@property (nonatomic, retain) NSMutableDictionary *activeComponentsIndexed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CRAccNavProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ACCNavigationProvider *iapNavigation;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_localizedNameForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_addAccessoryIfNeeded:(id)arg1;
- (void)_broadcastRouteGuidance:(id)arg1;
- (id)_componentKeys;
- (id)_locked_activeComponents;
- (void)_locked_addAccessoryIfNeeded:(id)arg1;
- (id)accessoriesIndexed;
- (struct os_unfair_lock_s { unsigned int x1; })accessoryLock;
- (id)activeAccessoryComponentsIndexed;
- (id)activeComponents;
- (id)activeComponentsIndexed;
- (id)delegate;
- (id)iapNavigation;
- (id)initWithDelegate:(id)arg1;
- (void)navigation:(id)arg1 accessoryAttached:(id)arg2;
- (void)navigation:(id)arg1 accessoryDetached:(id)arg2;
- (void)navigation:(id)arg1 startRouteGuidance:(id)arg2 componentList:(id)arg3;
- (void)navigation:(id)arg1 stopRouteGuidance:(id)arg2 componentList:(id)arg3;
- (void)resetActiveComponents;
- (void)sendInfo:(id)arg1 toComponentUID:(id)arg2;
- (void)sendNoSupportForAppIdentifier:(id)arg1;
- (void)setAccessoriesIndexed:(id)arg1;
- (void)setAccessoryLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setActiveAccessoryComponentsIndexed:(id)arg1;
- (void)setActiveComponentsIndexed:(id)arg1;
- (void)setIapNavigation:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end

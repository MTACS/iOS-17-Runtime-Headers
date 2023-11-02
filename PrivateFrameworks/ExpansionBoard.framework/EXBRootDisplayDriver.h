
@interface EXBRootDisplayDriver : NSObject <BSDescriptionStreamable> {
    NSObject<OS_dispatch_queue> * _CADisplayQueue;
    Class  _ConfigBuilderClass;
    EXBDisplayAssertionCoordinator * _assertionCoordinator;
    bool  _didConnectRootIdentity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_index_recordsByDisplay;
    NSMapTable * _lock_recordsByProfile;
    NSMapTable * _lock_seedsByProfile;
    FBSDisplayConfiguration * _rootConfiguration;
    FBSDisplayIdentity * _rootIdentity;
    NSMutableSet * _trackedDisplays;
    <EXBDisplayTransformUpdating> * _transformUpdater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_derivedDisplayConnected:(id)arg1;
- (void)_performWithRecordForDisplay:(id)arg1 block:(id /* block */)arg2;
- (void)_rootDisplayConnected:(id)arg1;
- (void)addProfile:(id)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)controllerForDisplay:(id)arg1;
- (id)description;
- (void)displayConnected:(id)arg1;
- (void)displayDisconnected:(id)arg1;
- (void)displayUpdated:(id)arg1;
- (id)initWithRootIdentity:(id)arg1 transformUpdater:(id)arg2 assertionCoordinator:(id)arg3 builderClass:(Class)arg4;
- (bool)isTrackingDisplays;
- (bool)isTrackingProfile:(id)arg1;
- (bool)isTrackingProfileForDisplay:(id)arg1;
- (id)profileForDisplay:(id)arg1;
- (void)removeProfile:(id)arg1;
- (id)transformDisplayConfiguration:(id)arg1;

@end

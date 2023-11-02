
@interface FBSDisplayMonitor : NSObject <BSInvalidatable> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_allowsUnknownDisplays;
    <FBSDisplayObserving> * _lock_bookendObserver;
    bool  _lock_canPostToBookendObserver;
    NSHashTable * _lock_observers;
    NSMapTable * _lock_sourcesByDisplay;
    CADisplay * _mainDisplay;
    FBSDisplaySource * _mainDisplaySource;
    <FBSDisplayTransformer> * _transformer;
}

@property (nonatomic, readonly) <FBSDisplayObserving> *bookendObserver;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callOutQueue;
@property (nonatomic, readonly) bool canPostToBookendObserver;
@property (nonatomic, readonly, copy) NSSet *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainConfiguration;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *mainIdentity;
@property (nonatomic, readonly, copy) NSArray *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <FBSDisplayTransformer> *transformer;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (void).cxx_destruct;
- (id)_initWithBookendObserver:(id)arg1 transformer:(id)arg2;
- (void)_lock_enumerateConnectedWithBlock:(id /* block */)arg1;
- (void)_lock_enumerateSourcesWithBlock:(id /* block */)arg1;
- (void)_postInitialBookendObserverConnections;
- (id)_sortedSources;
- (void)_updateTransformsWithCompletion:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (bool)allowsUnknownDisplays;
- (id)bookendObserver;
- (id)callOutQueue;
- (bool)canPostToBookendObserver;
- (id)configurationForIdentity:(id)arg1;
- (id)connectedIdentities;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithInitializationCompletion:(id /* block */)arg1;
- (void)invalidate;
- (id)mainConfiguration;
- (id)mainIdentity;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setAllowsUnknownDisplays:(bool)arg1;
- (id)transformer;

// Image: /System/Library/PrivateFrameworks/PosterBoardUIServices.framework/PosterBoardUIServices

+ (id)pruis_sharedDisplayMonitor;

@end

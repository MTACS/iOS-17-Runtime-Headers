
@interface SFCredentialProviderExtensionManager : NSObject <WBSDeallocationSentinelObserver> {
    bool  _errorEncounteredDuringLastExtensionDiscovery;
    id  _extensionMatchingToken;
    NSSet * _extensions;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _observerLock;
    NSMutableOrderedSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _weakObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *extensions;
@property (nonatomic, readonly) NSSet *extensionsSync;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSExtension *primaryExtension;
@property (nonatomic, readonly) NSExtension *primaryExtensionSync;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addObserverOnInternalQueue:(id)arg1 shouldHoldWeakly:(bool)arg2;
- (void)_beginExtensionDiscovery;
- (void)_endExtensionDiscovery;
- (id)_extensions;
- (void)_notifyObservers:(id)arg1;
- (void)_observerWasRemovedOnInternalQueue;
- (void)_updateExtensions:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addWeakObserver:(id)arg1;
- (void)dealloc;
- (id)displayNameForExtension:(id)arg1;
- (bool)extensionIsEnabled:(id)arg1;
- (bool)extensionSupportsPasskeys:(id)arg1;
- (id)extensions;
- (id)extensionsSync;
- (void)getPrimaryExtensionWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)primaryExtension;
- (id)primaryExtensionSync;
- (void)removeObserver:(id)arg1;
- (void)sentinelDidDeallocateWithContext:(id)arg1;
- (void)setExtension:(id)arg1 isEnabled:(bool)arg2;
- (bool)shouldShowConfigurationUIForEnablingExtension:(id)arg1;

@end

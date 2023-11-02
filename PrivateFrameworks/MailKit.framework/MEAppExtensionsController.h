
@interface MEAppExtensionsController : NSObject {
    NSArray * _allRemoteExtensions;
    id  _extensionMatchingContext;
    NSDictionary * _extensionsByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _observers;
    NSArray * _previouslyEnabledExtensionIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    <EFCancelable> * _stateCaptureCancelable;
    NSObject<OS_dispatch_queue> * _stateCaptureQueue;
}

@property (nonatomic, retain) NSDictionary *extensionsByIdentifier;
@property (nonatomic, retain) NSArray *previouslyEnabledExtensionIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) <EFCancelable> *stateCaptureCancelable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateCaptureQueue;

+ (id)_emailExtensionAttributeDictionary;
+ (id)log;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_extension:(id)arg1 matchesCapabilities:(id)arg2;
- (bool)_extension:(id)arg1 matchesCriteria:(id)arg2;
- (bool)_extension:(id)arg1 matchesOldCriteria:(id)arg2;
- (id)_extensionsNewlyMatchingFromNewExtensions:(id)arg1 currentExtensions:(id)arg2 forCriteria:(id)arg3;
- (id)_extensionsNoLongerMatchingFromNewExtensions:(id)arg1 currentExtensions:(id)arg2 forCriteria:(id)arg3;
- (void)_logExtensionsStateWithReason:(id)arg1;
- (id)_remoteEmailExtensionsForExtensions:(id)arg1 enabledOnly:(bool)arg2;
- (void)_startMatchingExtensions;
- (void)_stopMatchingExtensions;
- (void)dealloc;
- (id)extensionForIdentifier:(id)arg1;
- (id)extensionsByIdentifier;
- (id)init;
- (id)previouslyEnabledExtensionIdentifiers;
- (id)queue;
- (void)registerMailAppExtensionsObserver:(id)arg1 capabilities:(id)arg2 includeDisabled:(bool)arg3 completion:(id /* block */)arg4;
- (void)setExtensionsByIdentifier:(id)arg1;
- (void)setPreviouslyEnabledExtensionIdentifiers:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)stateCaptureCancelable;
- (id)stateCaptureQueue;

@end


@interface MEContentRuleListManager : NSObject <MEAppExtensionsObserver> {
    EFLocked * _activeRuleListsByIdentifier;
    MEAppExtensionsController * _extensionsController;
    EFCancelationToken * _extensionsObserverCancelable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <EFAssertableScheduler> * _observationScheduler;
    NSHashTable * _observers;
    EFDebouncer * _reloadDebouncer;
    EFLocked * _remoteExtensions;
}

+ (id)log;

- (void).cxx_destruct;
- (id)_activeRuleLists;
- (void)_compileAndAddContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2;
- (id)_encodedContentRuleListForExtension:(id)arg1;
- (void)_handleExtensionsAdded:(id)arg1;
- (void)_handleExtensionsRemoved:(id)arg1;
- (void)_notifyObserversOfNewContentRuleList:(id)arg1;
- (void)_notifyObserversOfRemovedContentRuleList:(id)arg1;
- (void)_notifyObserversOfUpdatedContentRuleList:(id)arg1 oldContentRuleList:(id)arg2;
- (void)_reloadContentRuleLists;
- (void)_scheduleContentRuleListReload;
- (id)addObserver:(id)arg1 activeRuleLists:(id*)arg2;
- (void)dealloc;
- (void)extensionsMatched:(id)arg1;
- (void)extensionsNoLongerMatching:(id)arg1;
- (id)init;
- (id)initWithExtensionsController:(id)arg1;

@end


@interface WKProcessAssertionBackgroundTaskManager : NSObject <RBSAssertionObserving> {
    struct ThreadSafeWeakHashSet<WebKit::ProcessAndUIAssertion> { 
        struct HashMap<const WebKit::ProcessAndUIAssertion *, WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>, WTF::DefaultHash<const WebKit::ProcessAndUIAssertion *>, WTF::HashTraits<const WebKit::ProcessAndUIAssertion *>, WTF::HashTraits<WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>>, WTF::HashTableTraits> { 
            struct HashTable<const WebKit::ProcessAndUIAssertion *, WTF::KeyValuePair<const WebKit::ProcessAndUIAssertion *, WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const WebKit::ProcessAndUIAssertion *, WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>>>, WTF::DefaultHash<const WebKit::ProcessAndUIAssertion *>, WTF::HashMap<const WebKit::ProcessAndUIAssertion *, WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>>::KeyValuePairTraits, WTF::HashTraits<const WebKit::ProcessAndUIAssertion *>> { 
                union { 
                    void *m_table; 
                    unsigned int *m_tableForLLDB; 
                } ; 
            } m_impl; 
        } m_map; 
        unsigned int m_operationCountSinceLastCleanup; 
        unsigned int m_maxOperationCountWithoutCleanup; 
        struct Lock { 
            struct Atomic<unsigned char> { 
                struct atomic<unsigned char> { 
                    struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                        _Atomic unsigned char __a_value; 
                    } __a_; 
                } value; 
            } m_byte; 
        } m_lock; 
    }  _assertionsNeedingBackgroundTask;
    struct RetainPtr<RBSAssertion> { 
        void *m_ptr; 
    }  _backgroundTask;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _backgroundTaskWasInvalidated;
    id /* block */  _pendingTaskReleaseTask;
    struct unique_ptr<WebKit::ProcessStateMonitor, std::default_delete<WebKit::ProcessStateMonitor>> { 
        struct __compressed_pair<WebKit::ProcessStateMonitor *, std::default_delete<WebKit::ProcessStateMonitor>> { 
            struct ProcessStateMonitor {} *__value_; 
        } __ptr_; 
    }  m_processStateMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)shared;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancelPendingReleaseTask;
- (void)_handleBackgroundTaskExpiration;
- (void)_handleBackgroundTaskExpirationOnMainThread;
- (bool)_hasBackgroundTask;
- (void)_notifyAssertionsOfImminentSuspension;
- (void)_releaseBackgroundTask;
- (void)_scheduleReleaseTask;
- (void)_updateBackgroundTask;
- (void)addAssertionNeedingBackgroundTask:(void*)arg1;
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)assertionWillInvalidate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeAssertionNeedingBackgroundTask:(void*)arg1;
- (void)setProcessStateMonitorEnabled:(bool)arg1;

@end

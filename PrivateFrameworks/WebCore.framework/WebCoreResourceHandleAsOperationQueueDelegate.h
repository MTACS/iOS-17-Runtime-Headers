
@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate> {
    bool  m_boolResult;
    struct RetainPtr<NSCachedURLResponse> { 
        void *m_ptr; 
    }  m_cachedResponseResult;
    void * m_handle;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                    _Atomic unsigned char __a_value; 
                } __a_; 
            } value; 
        } m_byte; 
    }  m_lock;
    struct RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::RawPtrTraits<WebCore::SynchronousLoaderMessageQueue>, WTF::DefaultRefDerefTraits<WebCore::SynchronousLoaderMessageQueue>> { 
        struct SynchronousLoaderMessageQueue {} *m_ptr; 
    }  m_messageQueue;
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    }  m_requestResult;
    struct optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash>> { 
        union { 
            BOOL __null_state_; 
            struct HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTableTraits> { 
                struct HashTable<WTF::RefPtr<WTF::SchedulePair>, WTF::RefPtr<WTF::SchedulePair>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>> { 
                    union { 
                        void *m_table; 
                        unsigned int *m_tableForLLDB; 
                    } ; 
                } m_impl; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  m_scheduledPairs;
    struct BinarySemaphore { 
        bool m_isSet; 
        struct Lock { 
            struct Atomic<unsigned char> { 
                struct atomic<unsigned char> { 
                    struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                        _Atomic unsigned char __a_value; 
                    } __a_; 
                } value; 
            } m_byte; 
        } m_lock; 
        struct Condition { 
            struct Atomic<bool> { 
                struct atomic<bool> { 
                    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
                        _Atomic bool __a_value; 
                    } __a_; 
                } value; 
            } m_hasWaiters; 
        } m_condition; 
    }  m_semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)callFunctionOnMainThread:(void*)arg1;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)detachHandle;
- (id)initWithHandle:(void*)arg1 messageQueue:(void*)arg2;

@end

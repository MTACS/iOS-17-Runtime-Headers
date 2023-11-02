
@interface WebCoreNSURLSession : NSObject {
    unsigned char  _corsResults;
    struct HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTableTraits> { 
        struct HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  _dataTasks;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                    _Atomic unsigned char __a_value; 
                } __a_; 
            } value; 
        } m_byte; 
    }  _dataTasksLock;
    struct WeakObjCPtr<id<NSURLSessionDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct OSObjectPtr<NSObject<OS_dispatch_queue> *> { 
        NSObject<OS_dispatch_queue> *m_ptr; 
    }  _internalQueue;
    bool  _invalidated;
    struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::RawPtrTraits<WebCore::PlatformMediaResourceLoader>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResourceLoader>> { 
        struct PlatformMediaResourceLoader {} *m_ptr; 
    }  _loader;
    struct atomic<unsigned long long> { 
        struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { 
            _Atomic unsigned long long __a_value; 
        } __a_; 
    }  _nextTaskIdentifier;
    struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::DefaultHash<RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTableTraits> { 
        struct HashTable<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::SecurityOrigin>, WTF::IdentityExtractor, WTF::DefaultHash<RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  _origins;
    struct RetainPtr<NSOperationQueue> { 
        void *m_ptr; 
    }  _queue;
    struct RefPtr<WebCore::RangeResponseGenerator, WTF::RawPtrTraits<WebCore::RangeResponseGenerator>, WTF::DefaultRefDerefTraits<WebCore::RangeResponseGenerator>> { 
        struct RangeResponseGenerator {} *m_ptr; 
    }  _rangeResponseGenerator;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _sessionDescription;
}

@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (retain) <NSURLSessionTaskDelegate> *delegate;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly) bool didPassCORSAccessChecks;
@property (readonly) void*loader;
@property (copy) NSString *sessionDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDelegateOperation:(void*)arg1;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithURL:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (bool)didPassCORSAccessChecks;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (void)finishTasksAndInvalidate;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)getAllTasksWithCompletionHandler:(id /* block */)arg1;
- (void)getTasksWithCompletionHandler:(id /* block */)arg1;
- (id)initWithResourceLoader:(void*)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateAndCancel;
- (bool)isCrossOrigin:(const void*)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (void*)loader;
- (void*)rangeResponseGenerator;
- (void)resetWithCompletionHandler:(id /* block */)arg1;
- (void)sendH2Ping:(id)arg1 pongHandler:(id /* block */)arg2;
- (id)sessionDescription;
- (void)setDelegate:(id)arg1;
- (void)setSessionDescription:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)streamTaskWithNetService:(id)arg1;
- (void)task:(id)arg1 addSecurityOrigin:(void*)arg2;
- (void)task:(id)arg1 didReceiveCORSAccessCheckResult:(bool)arg2;
- (void)taskCompleted:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithStreamedRequest:(id)arg1;

@end

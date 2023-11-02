
@interface WKWebGeolocationPolicyDecider : NSObject {
    struct unique_ptr<PermissionRequest, std::default_delete<PermissionRequest>> { 
        struct __compressed_pair<PermissionRequest *, std::default_delete<PermissionRequest>> { 
            struct PermissionRequest {} *__value_; 
        } __ptr_; 
    }  _activeChallenge;
    struct Deque<std::unique_ptr<PermissionRequest>, 0UL> { 
        unsigned long long m_start; 
        unsigned long long m_end; 
        struct VectorBuffer<std::unique_ptr<PermissionRequest>, 0UL, WTF::FastMalloc> { 
            void *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } m_buffer; 
    }  _challenges;
    struct RetainPtr<NSObject<OS_dispatch_queue> *> { 
        void *m_ptr; 
    }  _diskDispatchQueue;
    struct RetainPtr<NSMutableDictionary> { 
        void *m_ptr; 
    }  _sites;
}

+ (id)sharedPolicyDecider;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addChallengeCount:(long long)arg1 forToken:(id)arg2 requestingURL:(id)arg3;
- (void)_executeNextChallenge;
- (void)_finishActiveChallenge:(bool)arg1;
- (long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2;
- (void)_loadWithCompletionHandler:(id /* block */)arg1;
- (void)_save;
- (id)_siteFile;
- (id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(bool)arg2;
- (void)clearCache;
- (void)dealloc;
- (void)decidePolicyForGeolocationRequestFromOrigin:(const void*)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4;
- (id)init;

@end


@interface DSProvidersObserver : NSObject {
    struct TConditionVariable { 
        struct condition_variable_any { 
            struct condition_variable { 
                struct _opaque_pthread_cond_t { 
                    long long __sig; 
                    BOOL __opaque[40]; 
                } __cv_; 
            } __cv_; 
            struct shared_ptr<std::mutex> { 
                struct mutex {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } __mut_; 
        } fCondition; 
        int fWaitCount; 
    }  _cv;
    bool  _firstUpdateReceived;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _mutex;
    NSArray * _providers;
    NSObject * _token;
    struct TNodePtr { 
        FINode *fFINode; 
    }  fParentNode;
    bool  populated;
}

@property (readonly) bool firstUpdateReceived;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)blockUntilPopulated;
- (void)collectionSynched;
- (bool)firstUpdateReceived;
- (bool)populated;
- (id)providers;
- (id)providersByAddingProviderIfNeeded:(id)arg1;
- (void)receivedChanges:(id)arg1;
- (void)setProviders:(id)arg1;
- (void)startObserving;
- (void)stopObserving;

@end

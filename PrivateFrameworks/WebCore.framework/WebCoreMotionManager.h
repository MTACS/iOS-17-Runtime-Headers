
@interface WebCoreMotionManager : NSObject {
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::DefaultWeakPtrImpl, WTF::EnableWeakPtrThreadingAssertions::Yes> { 
        struct HashSet<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTableTraits> { 
            struct HashTable<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>> { 
                union { 
                    void *m_table; 
                    unsigned int *m_tableForLLDB; 
                } ; 
            } m_impl; 
        } m_set; 
        unsigned int m_operationCountSinceLastCleanup; 
        unsigned int m_maxOperationCountWithoutCleanup; 
    }  m_deviceMotionClients;
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::DefaultWeakPtrImpl, WTF::EnableWeakPtrThreadingAssertions::Yes> { 
        struct HashSet<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTableTraits> { 
            struct HashTable<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>> { 
                union { 
                    void *m_table; 
                    unsigned int *m_tableForLLDB; 
                } ; 
            } m_impl; 
        } m_set; 
        unsigned int m_operationCountSinceLastCleanup; 
        unsigned int m_maxOperationCountWithoutCleanup; 
    }  m_deviceOrientationClients;
    bool  m_gyroAvailable;
    bool  m_headingAvailable;
    bool  m_initialized;
    struct RetainPtr<CLLocationManager> { 
        void *m_ptr; 
    }  m_locationManager;
    struct RetainPtr<CMMotionManager> { 
        void *m_ptr; 
    }  m_motionManager;
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    }  m_updateTimer;
}

+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMotionClient:(void*)arg1;
- (void)addOrientationClient:(void*)arg1;
- (void)checkClientStatus;
- (void)dealloc;
- (bool)gyroAvailable;
- (bool)headingAvailable;
- (id)init;
- (void)initializeOnMainThread;
- (void)removeMotionClient:(void*)arg1;
- (void)removeOrientationClient:(void*)arg1;
- (void)sendAccelerometerData:(id)arg1;
- (void)sendMotionData:(id)arg1 withHeading:(id)arg2;
- (void)update;

@end

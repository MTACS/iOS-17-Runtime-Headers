
@interface WebCoreMediaCaptureStatusBarHandler : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {
    struct RetainPtr<SBSStatusBarStyleOverridesCoordinator> { 
        void *m_ptr; 
    }  m_coordinator;
    struct WeakPtr<WebCore::MediaCaptureStatusBarManager, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_manager;
    struct RetainPtr<SBSStatusBarStyleOverridesAssertion> { 
        void *m_ptr; 
    }  m_statusBarStyleOverride;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithManager:(void*)arg1;
- (void)start;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;
- (bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)stop;
- (void)validateIsStopped;

@end

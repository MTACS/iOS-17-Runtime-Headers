
@interface _WKSmartCardSlotStateObserver : NSObject {
    struct WeakPtr<WebKit::CcidService, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_service;
    struct RetainPtr<TKSmartCardSlot> { 
        void *m_ptr; 
    }  m_slot;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithService:(void*)arg1 slot:(void*)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver;

@end

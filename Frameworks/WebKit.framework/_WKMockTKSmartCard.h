
@interface _WKMockTKSmartCard : TKSmartCard {
    struct WeakPtr<WebKit::MockCcidService, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_service;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginSessionWithReply:(id /* block */)arg1;
- (void)endSession;
- (id)initWithService:(void*)arg1;
- (void)transmitRequest:(id)arg1 reply:(id /* block */)arg2;

@end

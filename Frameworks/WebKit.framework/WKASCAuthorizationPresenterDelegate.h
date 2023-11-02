
@interface WKASCAuthorizationPresenterDelegate : NSObject <ASCAuthorizationPresenterDelegate> {
    struct WeakPtr<WebKit::AuthenticatorPresenterCoordinator, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _coordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)authorizationPresenter:(id)arg1 credentialRequestedForLoginChoice:(id)arg2 authenticatedContext:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)authorizationPresenter:(id)arg1 validateUserEnteredPIN:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dispatchCoordinatorCallback:(void*)arg1;
- (id)initWithCoordinator:(void*)arg1;

@end

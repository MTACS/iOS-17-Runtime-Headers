
@interface _WKWebAuthenticationPanel : NSObject <WKObject> {
    struct WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _client;
    struct ObjectStorage<API::WebAuthenticationPanel> { 
        struct type { 
            unsigned char __lx[88]; 
        } data; 
    }  _panel;
    struct RetainPtr<NSMutableSet> { 
        void *m_ptr; 
    }  _transports;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_WKWebAuthenticationPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *relyingPartyID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *transports;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *userName;

+ (void)clearAllLocalAuthenticatorCredentials;
+ (struct PublicKeyCredentialCreationOptions { struct RpEntity { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_1_1_1; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct optional<WTF::String> { union { BOOL x_1_3_1; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_5_1; } x_2_4_1; } x_1_3_2; } x_3_2_1; bool x_3_2_2; } x_1_1_3; } x1; struct UserEntity { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_2_1_2; struct BufferSource { struct variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { struct __impl<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { BOOL x_1_5_1; struct __alt<0UL, WTF::RefPtr<JSC::ArrayBufferView>> { struct RefPtr<JSC::ArrayBufferView, WTF::RawPtrTraits<JSC::ArrayBufferView>, WTF::DefaultRefDerefTraits<JSC::ArrayBufferView>> { struct ArrayBufferView {} *x_1_7_1; } x_2_6_1; } x_1_5_2; union __union<std::__variant_detail::_Trait::_Available, 1UL, WTF::RefPtr<JSC::ArrayBuffer>> { BOOL x_3_6_1; struct __alt<1UL, WTF::RefPtr<JSC::ArrayBuffer>> { struct RefPtr<JSC::ArrayBuffer, WTF::RawPtrTraits<JSC::ArrayBuffer>, WTF::DefaultRefDerefTraits<JSC::ArrayBuffer>> { struct ArrayBuffer {} *x_1_8_1; } x_2_7_1; } x_3_6_2; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x_3_6_3; } x_1_5_3; } x_1_4_1; unsigned int x_1_4_2; } x_1_3_1; } x_3_2_1; } x_2_1_3; } x2; })convertToCoreCreationOptionsWithOptions:(id)arg1;
+ (struct PublicKeyCredentialRequestOptions { struct BufferSource { struct variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { struct __impl<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { BOOL x_1_4_1; struct __alt<0UL, WTF::RefPtr<JSC::ArrayBufferView>> { struct RefPtr<JSC::ArrayBufferView, WTF::RawPtrTraits<JSC::ArrayBufferView>, WTF::DefaultRefDerefTraits<JSC::ArrayBufferView>> { struct ArrayBufferView {} *x_1_6_1; } x_2_5_1; } x_1_4_2; union __union<std::__variant_detail::_Trait::_Available, 1UL, WTF::RefPtr<JSC::ArrayBuffer>> { BOOL x_3_5_1; struct __alt<1UL, WTF::RefPtr<JSC::ArrayBuffer>> { struct RefPtr<JSC::ArrayBuffer, WTF::RawPtrTraits<JSC::ArrayBuffer>, WTF::DefaultRefDerefTraits<JSC::ArrayBuffer>> { struct ArrayBuffer {} *x_1_7_1; } x_2_6_1; } x_3_5_2; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x_3_5_3; } x_1_4_3; } x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })convertToCoreRequestOptionsWithOptions:(id)arg1;
+ (void)deleteLocalAuthenticatorCredentialWithGroupAndID:(id)arg1 credential:(id)arg2;
+ (void)deleteLocalAuthenticatorCredentialWithID:(id)arg1;
+ (id)encodeGetAssertionCommandWithClientDataHash:(id)arg1 options:(id)arg2 userVerificationAvailability:(long long)arg3;
+ (id)encodeGetAssertionCommandWithClientDataHash:(id)arg1 options:(id)arg2 userVerificationAvailability:(long long)arg3 authenticatorSupportedExtensions:(id)arg4;
+ (id)encodeGetAssertionCommandWithClientDataJSON:(id)arg1 options:(id)arg2 userVerificationAvailability:(long long)arg3;
+ (id)encodeGetAssertionCommandWithClientDataJSON:(id)arg1 options:(id)arg2 userVerificationAvailability:(long long)arg3 authenticatorSupportedExtensions:(id)arg4;
+ (id)encodeMakeCredentialCommandWithClientDataHash:(id)arg1 options:(id)arg2 userVerificationAvailability:(long long)arg3;
+ (id)encodeMakeCredentialCommandWithClientDataHash:(id)arg1 options:(id)arg2 userVerificationAvailability:(long long)arg3 authenticatorSupportedExtensions:(id)arg4;
+ (id)encodeMakeCredentialCommandWithClientDataJSON:(id)arg1 options:(id)arg2 userVerificationAvailability:(long long)arg3;
+ (id)encodeMakeCredentialCommandWithClientDataJSON:(id)arg1 options:(id)arg2 userVerificationAvailability:(long long)arg3 authenticatorSupportedExtensions:(id)arg4;
+ (id)exportLocalAuthenticatorCredentialWithGroupAndID:(id)arg1 credential:(id)arg2 error:(id*)arg3;
+ (id)exportLocalAuthenticatorCredentialWithID:(id)arg1 error:(id*)arg2;
+ (id)getAllLocalAuthenticatorCredentials;
+ (id)getAllLocalAuthenticatorCredentialsWithAccessGroup:(id)arg1;
+ (id)getAllLocalAuthenticatorCredentialsWithCredentialID:(id)arg1;
+ (id)getAllLocalAuthenticatorCredentialsWithCredentialIDAndAccessGroup:(id)arg1 credentialID:(id)arg2;
+ (id)getAllLocalAuthenticatorCredentialsWithRPID:(id)arg1;
+ (id)getAllLocalAuthenticatorCredentialsWithRPIDAndAccessGroup:(id)arg1 rpID:(id)arg2;
+ (id)getClientDataJSONForAuthenticationType:(long long)arg1 challenge:(id)arg2 origin:(id)arg3;
+ (id)getClientDataJSONWithTopOrigin:(long long)arg1 challenge:(id)arg2 origin:(id)arg3 topOrigin:(id)arg4 crossOrigin:(bool)arg5;
+ (id)importLocalAuthenticatorCredential:(id)arg1 error:(id*)arg2;
+ (id)importLocalAuthenticatorWithAccessGroup:(id)arg1 credential:(id)arg2 error:(id*)arg3;
+ (bool)isUserVerifyingPlatformAuthenticatorAvailable;
+ (void)setDisplayNameForLocalCredentialWithGroupAndID:(id)arg1 credential:(id)arg2 displayName:(id)arg3;
+ (void)setNameForLocalCredentialWithGroupAndID:(id)arg1 credential:(id)arg2 name:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (void)getAssertionWithChallenge:(id)arg1 origin:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getAssertionWithClientDataHash:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getAssertionWithMediationRequirement:(long long)arg1 clientDataHash:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)makeCredentialWithChallenge:(id)arg1 origin:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)makeCredentialWithClientDataHash:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)makeCredentialWithMediationRequirement:(long long)arg1 clientDataHash:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)relyingPartyID;
- (void)setDelegate:(id)arg1;
- (void)setMockConfiguration:(id)arg1;
- (id)transports;
- (long long)type;
- (id)userName;

@end

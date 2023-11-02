
@interface WebFramePolicyListener : NSObject <WebFormSubmissionListener, WebPolicyDecisionListener> {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _appLinkURL;
    unsigned char  _defaultPolicy;
    struct RefPtr<WebCore::LocalFrame, WTF::RawPtrTraits<WebCore::LocalFrame>, WTF::DefaultRefDerefTraits<WebCore::LocalFrame>> { 
        struct LocalFrame {} *m_ptr; 
    }  _frame;
    struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { 
        struct ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } m_object; 
        struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } m_processIdentifier; 
    }  _identifier;
    struct Function<void (WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>>>="__value_"^v {}  _policyFunction;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _referrerURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)continue;
- (void)dealloc;
- (void)download;
- (void)ignore;
- (id)initWithFrame:(struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame {} *x1; })arg1 identifier:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_1_1_1; } x1; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_2_1_1; } x2; })arg2 policyFunction:(void*)arg3 defaultPolicy:(unsigned char)arg4;
- (id)initWithFrame:(struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame {} *x1; })arg1 identifier:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_1_1_1; } x1; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_2_1_1; } x2; })arg2 policyFunction:(void*)arg3 defaultPolicy:(unsigned char)arg4 appLinkURL:(id)arg5 referrerURL:(id)arg6;
- (void)invalidate;
- (void)receivedPolicyDecision:(unsigned char)arg1;
- (void)use;

@end

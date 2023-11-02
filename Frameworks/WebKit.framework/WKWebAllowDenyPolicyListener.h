
@interface WKWebAllowDenyPolicyListener : NSObject <WKWebAllowDenyPolicyListener> {
    struct Function<void (bool)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>>="__value_"^v {}  _completionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)deny;
- (id)initWithCompletionHandler:(void*)arg1;

@end

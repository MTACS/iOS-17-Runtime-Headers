
@interface WebNotificationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct CompletionHandler<void (WebCore::NotificationPermission)>="m_function"{Function<void (WebCore::NotificationPermission)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>>>="__value_"^v {}  _permissionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithPermissionHandler:(void*)arg1;
- (bool)shouldClearCache;

@end


@interface CLGnssDisablementAssertion : NSObject {
    struct unique_ptr<CLGnssDisablementAssertionInternal, std::default_delete<CLGnssDisablementAssertionInternal>> { 
        struct __compressed_pair<CLGnssDisablementAssertionInternal *, std::default_delete<CLGnssDisablementAssertionInternal>> { 
            struct CLGnssDisablementAssertionInternal {} *__value_; 
        } __ptr_; 
    }  fInternal;
}

+ (id)newAssertionForBundle:(id)arg1 withReason:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)newAssertionForBundleIdentifier:(id)arg1 withReason:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRegistrationMessageName:(const char *)arg1 messagePayload:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)invalidate;

@end

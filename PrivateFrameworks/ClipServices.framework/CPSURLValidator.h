
@interface CPSURLValidator : NSObject {
    CPSValidationRequest * _request;
}

- (void).cxx_destruct;
- (void)_validateURL:(id)arg1 forBundleID:(id)arg2 policy:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithRequest:(id)arg1;
- (void)validateWithCompletion:(id /* block */)arg1;

@end

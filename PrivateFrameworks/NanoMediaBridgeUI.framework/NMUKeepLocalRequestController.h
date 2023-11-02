
@interface NMUKeepLocalRequestController : NSObject {
    UIViewController * _presentingViewController;
    NMSKeepLocalRequest * _request;
}

+ (id)requiredPropertiesForModelKind:(id)arg1;

- (void).cxx_destruct;
- (void)_handleResponseForRequest:(id)arg1 options:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)_presentAlertForRequest:(id)arg1 options:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;
- (void)performRequestWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end


@interface NMUDownloadWaitingAlertController : NSObject {
    unsigned long long  _downloadPauseReason;
    NMSKeepLocalRequestOptions * _keepLocalRequestOptions;
    MPModelObject * _modelObject;
    UIViewController * _presentingViewController;
    unsigned long long  _status;
}

+ (id)requiredPropertiesForModelKind:(id)arg1;

- (void).cxx_destruct;
- (id)initWithModelObject:(id)arg1 status:(unsigned long long)arg2 downloadPauseReason:(unsigned long long)arg3 options:(id)arg4 presentingViewController:(id)arg5;
- (void)presentWithCompletion:(id /* block */)arg1;

@end

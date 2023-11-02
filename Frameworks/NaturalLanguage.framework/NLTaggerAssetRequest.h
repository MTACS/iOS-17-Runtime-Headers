
@interface NLTaggerAssetRequest : NSObject {
    id /* block */  _completionHandler;
    NSString * _language;
    NSString * _tagScheme;
}

+ (void)checkAssetRequests;

- (void).cxx_destruct;
- (void)completeWithResult:(long long)arg1 error:(id)arg2;
- (id)initWithLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)isFulfilled;
- (void)waitForFulfillment;

@end

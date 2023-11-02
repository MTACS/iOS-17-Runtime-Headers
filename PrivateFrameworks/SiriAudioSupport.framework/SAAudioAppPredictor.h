
@interface SAAudioAppPredictor : NSObject {
    void caller;
    void selector;
}

- (void).cxx_destruct;
- (void)disambiguationSelectedWithBundleIdentifier:(id)arg1 requestId:(id)arg2;
- (id)init;
- (id)initWithCaller:(long long)arg1;
- (void)predictWithSearch:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)warmWithCompletion:(id /* block */)arg1;

@end

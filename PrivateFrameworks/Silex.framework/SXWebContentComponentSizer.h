
@interface SXWebContentComponentSizer : SXComponentSizer {
    <SWLoadingPolicyProvider> * _loadingPolicyProvider;
}

@property (nonatomic, readonly) <SWLoadingPolicyProvider> *loadingPolicyProvider;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 loadingPolicyProvider:(id)arg6;
- (id)loadingPolicyProvider;

@end

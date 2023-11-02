
@interface JetEngine.LookupBagContract : JetEngine.URLBagContract <AMSLookupBagContract> {
    void backing;
}

@property (nonatomic, readonly) id unpersonalizedLookupURL;

- (void).cxx_destruct;
- (id)unpersonalizedLookupURL;

@end

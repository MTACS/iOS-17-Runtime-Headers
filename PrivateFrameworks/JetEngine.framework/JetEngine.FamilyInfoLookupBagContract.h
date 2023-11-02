
@interface JetEngine.FamilyInfoLookupBagContract : JetEngine.URLBagContract <AMSFamilyInfoLookupBagContract> {
    void backing;
}

@property (nonatomic, readonly) id familyInfoURL;

- (void).cxx_destruct;
- (id)familyInfoURL;

@end

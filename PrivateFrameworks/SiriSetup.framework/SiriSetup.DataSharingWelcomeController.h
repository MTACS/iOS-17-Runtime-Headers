
@interface SiriSetup.DataSharingWelcomeController : OBWelcomeController {
    void delegate;
    void orbView;
}

- (void).cxx_destruct;
- (void)aboutDataSharingTapped;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)notNowTapped;
- (void)shareTapped;

@end


@interface CertInfoTrustDetailsViewController : UIViewController {
    NSArray * _trustProperties;
}

@property (nonatomic, retain) NSArray *trustProperties;

- (void).cxx_destruct;
- (void)_setupNavItem;
- (void)loadView;
- (void)setTrustProperties:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)trustProperties;
- (void)viewWillAppear:(bool)arg1;

@end

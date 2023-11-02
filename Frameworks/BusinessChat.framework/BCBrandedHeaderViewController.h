
@interface BCBrandedHeaderViewController : UIViewController {
    BCSBusinessItem * _businessItem;
    <BCBrandedHeaderViewControllerDelegate> * _delegate;
    UIImageView * _logoImageView;
}

@property (nonatomic, readonly) BCSBusinessItem *businessItem;
@property (nonatomic) <BCBrandedHeaderViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIImageView *logoImageView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_fetchLogo;
- (id)businessItem;
- (id)delegate;
- (id)initWithBusinessItem:(id)arg1;
- (id)logoImageView;
- (void)setDelegate:(id)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)viewDidLoad;

@end

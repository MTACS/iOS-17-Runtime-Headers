
@interface BTShareAudioBaseViewController : UIViewController {
    UIView * _cardView;
    BTShareAudioViewController * _mainController;
    UILabel * _titleLabel;
    bool  _viewActive;
}

@property (nonatomic, retain) UIView *cardView;
@property (nonatomic, retain) BTShareAudioViewController *mainController;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool viewActive;

- (void).cxx_destruct;
- (void)_handleMenuButton:(id)arg1;
- (id)cardView;
- (id)mainController;
- (void)setCardView:(id)arg1;
- (void)setMainController:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setViewActive:(bool)arg1;
- (id)titleLabel;
- (bool)viewActive;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

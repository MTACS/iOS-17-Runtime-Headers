
@interface VUIAppLoadingViewController : UIViewController {
    bool  _cancelLoading;
    bool  _loading;
    VUIAppSpinnerView * _loadingView;
    UIView * _parentView;
    UIView * _principalView;
}

@property (nonatomic) bool loading;

- (void).cxx_destruct;
- (bool)loading;
- (void)setLoading:(bool)arg1;
- (void)setView:(id)arg1;

@end

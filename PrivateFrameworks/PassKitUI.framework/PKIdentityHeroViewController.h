
@interface PKIdentityHeroViewController : PKExplanationViewController {
    PKIdentityHeroViewConfiguration * _configuration;
    id /* block */  _primaryButtonClickedBlock;
    id /* block */  _secondaryButtonClickedBlock;
}

@property (nonatomic, copy) id /* block */ primaryButtonClickedBlock;
@property (nonatomic, copy) id /* block */ secondaryButtonClickedBlock;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (void)primaryButtonClicked:(id)arg1;
- (id /* block */)primaryButtonClickedBlock;
- (void)secondaryButtonClicked:(id)arg1;
- (id /* block */)secondaryButtonClickedBlock;
- (void)setPrimaryButtonClickedBlock:(id /* block */)arg1;
- (void)setSecondaryButtonClickedBlock:(id /* block */)arg1;
- (void)viewDidLoad;

@end

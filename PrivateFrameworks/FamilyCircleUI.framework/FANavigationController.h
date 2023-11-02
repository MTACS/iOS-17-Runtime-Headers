
@interface FANavigationController : UINavigationController {
    <FANavigationControllerDelegate> * _familyDelegate;
}

@property (nonatomic) <FANavigationControllerDelegate> *familyDelegate;

- (void).cxx_destruct;
- (bool)_isEmpty;
- (id)familyDelegate;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setFamilyDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;

@end

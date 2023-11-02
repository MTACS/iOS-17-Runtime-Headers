
@interface BFFViewControllerSpinnerManagerObjc : NSObject <BFFNavigationControllerDelegate> {
    void exceptionClassList;
    void navigationController;
    void weakObjectHashTable;
}

+ (void)configureWithNavigationController:(id)arg1;
+ (void)startAnimatingSpinnerFor:(id)arg1 identifier:(id)arg2;
+ (void)stopAnimatingSpinnerFor:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 operation:(long long)arg3 animated:(bool)arg4;
- (void)startAnimatingSpinnerFor:(id)arg1 identifier:(id)arg2;
- (void)stopAnimatingSpinnerFor:(id)arg1;

@end

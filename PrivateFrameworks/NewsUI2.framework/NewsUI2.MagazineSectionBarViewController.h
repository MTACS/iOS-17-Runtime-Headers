
@interface NewsUI2.MagazineSectionBarViewController : UIViewController <TUDeselectable, TUKeyCommandTraversable> {
    void blueprintLayoutProvider;
    void blueprintViewController;
    void config;
    void eventHandler;
    void isBeingUsedAsPlugin;
    void lastComputedSize;
    void pluggableDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  previousSelectedIndexPath;
    void styler;
}

- (void).cxx_destruct;
- (void)deselect;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

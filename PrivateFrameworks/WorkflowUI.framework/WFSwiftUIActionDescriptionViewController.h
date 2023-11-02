
@interface WFSwiftUIActionDescriptionViewController : UIViewController <WFActionDrawerDelegate> {
    void action;
    void delegate;
}

@property (nonatomic) <WFSwiftUIActionDescriptionViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)appendAction:(id)arg1;
- (id)delegate;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end

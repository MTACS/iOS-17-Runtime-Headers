
@interface SeymourUI.BlurViewController : UIViewController {
    void blurView;
    void snapshot;
    void viewController;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusEnvironments;

@end


@interface NewsArticles.TextSizeControlViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    void commandCenter;
    void decreaseAction;
    void decreaseButton;
    void divider;
    void increaseAction;
    void increaseButton;
    void stackView;
    void styler;
    void tracker;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

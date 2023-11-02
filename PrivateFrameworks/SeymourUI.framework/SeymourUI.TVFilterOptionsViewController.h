
@interface SeymourUI.TVFilterOptionsViewController : UIViewController {
    void dataProvider;
    void dependencies;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFocusedIndexPath;
    void layout;
    void metricPublishingDelegate;
    void settlingTimer;
    void timerProvider;
    void titleLabel;
    void visibility;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)menuButtonTapped;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;

@end

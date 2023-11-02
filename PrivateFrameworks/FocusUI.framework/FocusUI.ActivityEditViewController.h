
@interface FocusUI.ActivityEditViewController : UIViewController {
    void activityDescription;
    void visibleHeight;
    void willDisappearBlock;
}

@property (nonatomic, readonly) double visibleHeight;
@property (nonatomic, copy) id /* block */ willDisappearBlock;

- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (id)initWithActivityDescription:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setWillDisappearBlock:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (double)visibleHeight;
- (id /* block */)willDisappearBlock;

@end

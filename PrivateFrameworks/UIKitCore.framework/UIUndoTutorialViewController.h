
@interface UIUndoTutorialViewController : UIViewController {
    id /* block */  _completionHandler;
    UIUndoTutorialView * _tutorialView;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) UIUndoTutorialView *tutorialView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id /* block */)completionHandler;
- (void)doneButtonPressed;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setTutorialView:(id)arg1;
- (id)tutorialView;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

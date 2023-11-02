
@interface ICAudioBarViewController : UIViewController {
    UIViewController * _addedToViewController;
    <ICAudioBarViewControllerDelegate> * _delegate;
    ICNote * _note;
}

@property (nonatomic) UIViewController *addedToViewController;
@property (nonatomic) <ICAudioBarViewControllerDelegate> *delegate;
@property (nonatomic, readonly) UIButton *doneButton;
@property (nonatomic) double height;
@property (nonatomic) ICNote *note;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)addConstraintsInSuperview:(id)arg1;
- (void)addToViewController:(id)arg1;
- (id)addedToViewController;
- (void)adjustTextViewContentInsetWhenAddingView:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)doneButton;
- (bool)hasTranslucentNavigationBar;
- (double)height;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)note;
- (void)noteWillBeDeletedNotification:(id)arg1;
- (void)setAddedToViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setNote:(id)arg1;

@end

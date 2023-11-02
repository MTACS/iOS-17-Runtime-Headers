
@interface ConversationKit.ConversationHUDDetailsViewController : UIViewController <CNKSceneVisibilityHandler> {
    void controlsManager;
    void detailsDelegate;
    void detailsViewController;
    void isOnScreen;
    void linkShareCoordinator;
    void peoplePickerViewController;
}

@property (nonatomic) bool isOnScreen;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)dismissPeoplePicker;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isOnScreen;
- (void)setIsOnScreen:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

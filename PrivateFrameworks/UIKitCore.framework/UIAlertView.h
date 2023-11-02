
@interface UIAlertView : UIView {
    NSMutableArray * _actions;
    UIAlertController * _alertController;
    bool  _alertControllerShouldDismiss;
    long long  _alertViewStyle;
    long long  _cancelIndex;
    id  _context;
    long long  _defaultButtonIndex;
    id  _delegate;
    bool  _dismissingAlertController;
    UIViewController * _externalViewControllerForPresentation;
    long long  _firstOtherButtonIndex;
    bool  _handlingAlertActionShouldDismiss;
    bool  _hasPreparedAlertActions;
    bool  _isPresented;
    NSString * _message;
    _UIAlertControllerShimPresenter * _presenter;
    id  _retainedSelf;
    NSString * _subtitle;
}

@property (nonatomic) long long alertViewStyle;
@property (nonatomic, retain) NSString *bodyText;
@property (nonatomic) long long cancelButtonIndex;
@property (nonatomic, retain) id context;
@property (nonatomic) long long defaultButtonIndex;
@property (nonatomic) id delegate;
@property (getter=_externalViewControllerForPresentation, setter=_setExternalViewControllerForPresentation:, nonatomic, retain) UIViewController *externalViewControllerForPresentation;
@property (nonatomic, readonly) long long firstOtherButtonIndex;
@property (nonatomic) bool groupsTextFields;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) long long numberOfButtons;
@property (nonatomic) long long numberOfRows;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (getter=isVisible, nonatomic, readonly) bool visible;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;
+ (id)_alertViewForWindow:(id)arg1;
+ (id)_remoteAlertViewWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_addButtonWithTitle:(id)arg1;
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (id)_alertController;
- (void)_dismissForTappedIndex:(long long)arg1;
- (id)_externalViewControllerForPresentation;
- (bool)_isAnimating;
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (void)_prepareAlertActions;
- (bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (void)_setAccessoryView:(id)arg1;
- (void)_setExternalViewControllerForPresentation:(id)arg1;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
- (void)_setIsPresented:(bool)arg1;
- (void)_showAnimated:(bool)arg1;
- (void)_textDidChangeInTextField:(id)arg1;
- (id)_titleLabel;
- (void)_updateButtonTitle:(id)arg1 buttonIndex:(unsigned long long)arg2;
- (void)_updateFirstOtherButtonEnabledState;
- (void)_updateMessageAndSubtitle;
- (long long)addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (long long)alertViewStyle;
- (struct CGSize { double x1; double x2; })backgroundSize;
- (id)bodyText;
- (int)buttonCount;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)cancelButtonIndex;
- (id)context;
- (void)dealloc;
- (long long)defaultButtonIndex;
- (id)delegate;
- (void)dismiss;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (long long)firstOtherButtonIndex;
- (bool)groupsTextFields;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (bool)isVisible;
- (id)keyboard;
- (void)layout;
- (id)message;
- (long long)numberOfButtons;
- (long long)numberOfRows;
- (void)setAlertViewStyle:(long long)arg1;
- (void)setBodyText:(id)arg1;
- (void)setCancelButtonIndex:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupsTextFields:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setNumberOfRows:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTableShouldShowMinimumContent:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)show;
- (id)subtitle;
- (id)tableView;
- (id)textField;
- (id)textFieldAtIndex:(long long)arg1;
- (int)textFieldCount;
- (id)title;
- (id)titleLabel;
- (id)window;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)initWithError:(id)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;

@end


@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer {
    UIInterfaceActionGroupView * _actionGroupView;
    UIInterfaceAction * _interfaceActionOnPressBegan;
    <UIFocusedInterfaceActionPressDelegate> * _pressDelegate;
}

@property (nonatomic) UIInterfaceActionGroupView *actionGroupView;
@property (nonatomic) UIInterfaceAction *interfaceActionOnPressBegan;
@property (nonatomic) <UIFocusedInterfaceActionPressDelegate> *pressDelegate;

- (void).cxx_destruct;
- (void)_gestureChanged:(id)arg1;
- (id)actionGroupView;
- (id)initWithFocusedInterfaceActionPressDelegate:(id)arg1;
- (id)interfaceActionOnPressBegan;
- (id)pressDelegate;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setActionGroupView:(id)arg1;
- (void)setInterfaceActionOnPressBegan:(id)arg1;
- (void)setPressDelegate:(id)arg1;

@end

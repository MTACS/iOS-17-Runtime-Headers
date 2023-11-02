
@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F31UIKitFocusableViewResponderItem : UIKitFocusableViewResponderItemBase <UIFocusItem, _UIFocusItemPrivate> {
    void $__lazy_storage_$_defaultFocusGroupIdentifier;
    void base;
    void contentPath;
    void frame;
    void host;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) UIFocusEffect *focusEffect;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) NSString *swiftui_focusGroupIdentifier;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusEffect;
- (id)focusItemContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsFocusUpdate;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (id)swiftui_focusGroupIdentifier;
- (void)updateFocusIfNeeded;

@end

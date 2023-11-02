
@interface _TtC7SwiftUIP33_60C465D0E37117769FC505C04DE5239A24UIKitFocusableFillerItem : UIKitFocusableViewResponderItemBase <UIFocusItem> {
    void axis;
    void focusableFrame;
    void host;
    void logicalFrame;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)setNeedsFocusUpdate;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end

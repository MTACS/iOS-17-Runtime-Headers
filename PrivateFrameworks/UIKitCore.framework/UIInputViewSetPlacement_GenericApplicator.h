
@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {
    NSLayoutConstraint * _horizontalConstraint;
    <UIInputViewSetPlacementOwner> * _owner;
    NSLayoutConstraint * _verticalConstraint;
    NSLayoutConstraint * _widthConstraint;
}

@property (readonly) NSArray *constraints;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) UIView *draggableView;
@property (readonly) unsigned long long hash;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } inputAccessoryPadding;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } inputAssistantPadding;
@property (readonly) struct CGPoint { double x1; double x2; } origin;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } popoverFrame;
@property (readonly) Class superclass;
@property (readonly) UIView *twoFingerDraggableView;

+ (id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;

- (void).cxx_destruct;
- (bool)allConstraintsActive;
- (void)applyChanges:(id)arg1;
- (void)checkVerticalConstraint;
- (id)constraints;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)description;
- (id)draggableView;
- (id)initForOwner:(id)arg1 withPlacement:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inputAccessoryPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inputAssistantPadding;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isGesture:(id)arg1 inDraggableView:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })origin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverFrame;
- (bool)preBeginGesture:(id)arg1 shouldBegin:(bool*)arg2;
- (void)prepare;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (id)twoFingerDraggableView;

@end

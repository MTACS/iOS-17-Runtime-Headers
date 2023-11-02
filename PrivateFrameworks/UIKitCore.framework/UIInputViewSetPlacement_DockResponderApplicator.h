
@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator {
    UIKeyboardPopoverContainer * _popover;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _popoverRectPlaceholder;
}

@property (nonatomic, retain) UIKeyboardPopoverContainer *popover;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } popoverRectPlaceholder;

- (void).cxx_destruct;
- (void)applyChanges:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)draggableView;
- (void)invalidate;
- (void)invalidatePopover;
- (bool)isEqual:(id)arg1;
- (bool)isGesture:(id)arg1 inDraggableView:(struct CGPoint { double x1; double x2; })arg2;
- (bool)isPopoverRequired;
- (id)popover;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverRectPlaceholder;
- (bool)preBeginGesture:(id)arg1 shouldBegin:(bool*)arg2;
- (void)prepare;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })scaledPopoverTransform;
- (void)setPopover:(id)arg1;
- (void)setPopoverRectPlaceholder:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)startingPropertiesFromPlacementProperties:(id)arg1;
- (id)twoFingerDraggableView;

@end

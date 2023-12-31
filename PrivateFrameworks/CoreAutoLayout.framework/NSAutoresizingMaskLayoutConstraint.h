
@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint

// Image: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (id)constraintsWithAutoresizingMask:(unsigned long long)arg1 subitem:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 superitem:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;

- (int)_constraintType;
- (id)_viewForAutoresizingMask;
- (id)descriptionAccessory;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)oldUIConstraintsWithAutoresizingMask:(unsigned long long)arg1 subitem:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 superitem:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;

@end

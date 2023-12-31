
@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding> {
    bool  _dismissKeyboardOnly;
    double  _offset;
}

@property (nonatomic) bool dismissKeyboardOnly;
@property (nonatomic) double offset;

+ (id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(bool)arg2;
+ (bool)supportsSecureCoding;

- (Class)applicatorClassForKeyboard:(bool)arg1;
- (bool)dismissKeyboardOnly;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInteractive;
- (double)offset;
- (void)setDismissKeyboardOnly:(bool)arg1;
- (void)setOffset:(double)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end

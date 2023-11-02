
@interface UIInputViewSetPlacementAssistantOnScreenForNonKeyboard : UIInputViewSetPlacementWrapper <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end

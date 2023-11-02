
@interface CKUIBehaviorHUDPad : CKUIBehaviorPad

- (bool)entryFieldShouldUseBackdropView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })entryViewHorizontalCoverInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })entryViewVerticalCoverInsets;
- (bool)joystickUsesWindow;
- (id)theme;
- (bool)usesActionMenu;

@end

@interface UIInputViewSetPlacementOnScreen : UIInputViewSetPlacement <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (bool)inputViewWillAppear;
- (bool)showsInputOrAssistantViews;
- (bool)showsInputViews;
- (bool)showsKeyboard;

@end

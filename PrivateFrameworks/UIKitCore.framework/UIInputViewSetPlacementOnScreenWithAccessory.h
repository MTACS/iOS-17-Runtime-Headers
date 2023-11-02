
@interface UIInputViewSetPlacementOnScreenWithAccessory : UIInputViewSetPlacementOnScreen <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (bool)accessoryViewWillAppear;

@end

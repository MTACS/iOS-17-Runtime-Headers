
@protocol HUSymbolIconColorConfiguration <NSObject>

@required

- (UIColor *)activeIconBackgroundColor;
- (UIColor *)activeIconColor;
- (UIColor *)disabledIconBackgroundColor;
- (UIColor *)disabledIconColor;
- (UIColor *)iconBackgroundColorInDescriptiveView;
- (UIColor *)iconColorInDescriptiveView;
- (UIColor *)inactiveIconBackgroundColor;
- (UIColor *)inactiveIconColor;

@end


@protocol DTSColorWheelDelegate <NSObject>

@optional

- (void)colorWheel:(DTSColorWheel *)arg1 didPickColor:(UIColor *)arg2;
- (void)colorWheel:(DTSColorWheel *)arg1 pickerColorChanged:(UIColor *)arg2;
- (void)colorWheel:(DTSColorWheel *)arg1 willPickColor:(UIColor *)arg2;

@end


@protocol HUQuickControlIncrementalConvertibleProfile <NSObject>

@required

- (bool)hasSecondaryValue;
- (HFNumberValueConstraints *)primaryValueConstraints;
- (HFNumberValueConstraints *)secondaryValueConstraints;

@end

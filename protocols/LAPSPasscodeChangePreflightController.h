
@protocol LAPSPasscodeChangePreflightController <NSObject>

@required

- (bool)canChangePasscodeWithError:(id*)arg1;
- (NSDate *)lastPasscodeChange;

@end

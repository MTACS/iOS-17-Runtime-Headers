
@protocol SBUIPasscodeNumberPadButton <NSObject>

@required

- (int)characterType;
- (void)conformsToSBUIPasscodeNumberPadButton;
- (void)setReduceTransparencyButtonColor:(UIColor *)arg1;
- (NSString *)stringCharacter;

@end

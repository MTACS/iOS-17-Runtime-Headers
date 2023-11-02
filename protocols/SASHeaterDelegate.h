
@protocol SASHeaterDelegate <NSObject>

@required

- (void)heater:(SASHeater *)arg1 cancelledPreparationWithButtonIdentifier:(long long)arg2 duration:(double)arg3 targetDuration:(double)arg4;
- (void)heaterSuggestsPreheating:(SASHeater *)arg1;

@end

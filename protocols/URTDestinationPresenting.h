
@protocol URTDestinationPresenting <URTPresenting>

@required

- (URTAlert *)alert;
- (<URTDestinationPresentationDelegate> *)delegate;
- (long long)destination;
- (id)initWithAlert:(URTAlert *)arg1 forDestination:(long long)arg2 preferredPresentationStyle:(long long)arg3;
- (long long)preferredPresentationStyle;
- (void)setDelegate:(id <URTDestinationPresentationDelegate>)arg1;

@end

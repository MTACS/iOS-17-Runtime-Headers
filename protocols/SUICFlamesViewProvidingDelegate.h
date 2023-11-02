
@protocol SUICFlamesViewProvidingDelegate <NSObject>

@required

- (float)audioLevelForFlamesView:(id <SUICFlamesViewProviding>)arg1;

@optional

- (void)flamesViewAuraDidDisplay:(id <SUICFlamesViewProviding>)arg1;

@end

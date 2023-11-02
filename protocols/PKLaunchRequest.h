
@protocol PKLaunchRequest <NSObject>

@required

- (<PKPersona> *)launchPersona;
- (NSUUID *)uuid;

@end

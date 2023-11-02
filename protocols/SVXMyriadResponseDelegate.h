
@protocol SVXMyriadResponseDelegate <NSObject>

@required

- (void)deviceLostMyriadElection;
- (void)deviceWonMyriadElection;
- (void)unduckDevice;

@end

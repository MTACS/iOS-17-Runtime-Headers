
@protocol ANRapportConnectionDeviceDelegate <NSObject>

@optional

- (void)connection:(id <ANRapportConnectionProvider>)arg1 didFindDevice:(RPCompanionLinkDevice *)arg2;
- (void)connection:(id <ANRapportConnectionProvider>)arg1 didLoseDevice:(RPCompanionLinkDevice *)arg2;

@end

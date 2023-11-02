
@protocol _IKJSDevice <IKJSDevice, JSExport>

@required

- (NSNumber *)capacity:(NSString *)arg1;
- (bool)isInAirplaneMode;
- (bool)isInRetailDemoMode;
- (bool)isSeedBuild;
- (double)lastNetworkChangedTime;
- (NSString *)networkType;
- (NSString *)osBuildNumber;
- (NSNumber *)pixelRatio;
- (bool)runningAnInternalBuild;
- (NSString *)vendorID;

@end

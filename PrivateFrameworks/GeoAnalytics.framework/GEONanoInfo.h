
@interface GEONanoInfo : NSObject

+ (id)sharedInfo;

- (id)deviceIsAltAcct;
- (id)deviceIsAltAcctIfAvailable;
- (id)deviceOsVersionIfAvailable;
- (id)deviceProductType;
- (id)deviceProductTypeIfAvailable;
- (id)deviceSystemBuildVersion;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)deviceSystemVersion;
- (id)deviceSystemVersionIfAvailable;
- (id)hasPairedDevice;
- (id)hasPairedDeviceIfAvailable;

@end

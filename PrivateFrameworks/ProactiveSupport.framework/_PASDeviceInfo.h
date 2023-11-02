
@interface _PASDeviceInfo : NSObject {
    int  _lowPowerModeToken;
}

+ (id)deviceUUID;
+ (id)internalDeviceCode;
+ (bool)isAudioAccessory;
+ (bool)isBetaBuild;
+ (bool)isDNUEnabled;
+ (bool)isDemoModeEnabled;
+ (bool)isFaceTimeSupported;
+ (bool)isInternalBuild;
+ (bool)isLowEndHardware;
+ (bool)isLowPowerModeEnabled;
+ (bool)isiPad;
+ (id)sharedInstance;
+ (bool)shouldIncludePredictionLogs;

- (void)dealloc;
- (id)init;

@end

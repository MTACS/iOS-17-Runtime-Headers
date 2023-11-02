
@interface UARPPowerLogPendingReachabilityEvent : NSObject {
    NSString * _activeFirmwareVersion;
    NSString * _modelNumber;
    NSString * _stagedFirmwareVersion;
    NSUUID * _uuid;
}

@property (copy) NSString *activeFirmwareVersion;
@property (readonly) bool allDataPresent;
@property (readonly) NSString *modelNumber;
@property (copy) NSString *stagedFirmwareVersion;
@property (readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)activeFirmwareVersion;
- (bool)allDataPresent;
- (id)description;
- (id)initModelNumber:(id)arg1 uuid:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)modelNumber;
- (void)setActiveFirmwareVersion:(id)arg1;
- (void)setStagedFirmwareVersion:(id)arg1;
- (id)stagedFirmwareVersion;
- (id)uuid;

@end

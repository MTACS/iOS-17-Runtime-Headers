
@protocol SPFMIPRegisterInfo <NSObject>

@required

- (NSUUID *)baUUID;
- (NSDate *)beaconZoneCreationDate;
- (NSNumber *)beaconZoneCreationErrorCode;
- (NSDate *)lastKeyRollDate;
- (NSSet *)serviceDisabledReasons;
- (NSString *)serviceState;

@end

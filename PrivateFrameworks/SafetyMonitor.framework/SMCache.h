
@interface SMCache : NSObject <NSSecureCoding> {
    NSData * _destinationMapItem;
    SMDeviceStatus * _deviceStatus;
    NSUUID * _identifier;
    NSSet * _locationsDuringSession;
    SMLocation * _lockLocation;
    SMLocation * _mostRecentLocation;
    SMLocation * _offWristLocation;
    SMLocation * _parkedCarLocation;
    GEOLocationShifter * _shifter;
    SMLocation * _startingLocation;
    SMLocation * _unlockLocation;
}

@property (nonatomic, retain) NSData *destinationMapItem;
@property (nonatomic, retain) SMDeviceStatus *deviceStatus;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, retain) NSSet *locationsDuringSession;
@property (nonatomic, retain) SMLocation *lockLocation;
@property (nonatomic, retain) SMLocation *mostRecentLocation;
@property (nonatomic, retain) SMLocation *offWristLocation;
@property (nonatomic, retain) SMLocation *parkedCarLocation;
@property (nonatomic, retain) SMLocation *startingLocation;
@property (nonatomic, retain) SMLocation *unlockLocation;

+ (void)logNoCacheDataForSessionID:(id)arg1 role:(id)arg2 deviceType:(id)arg3 transaction:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destinationMapItem;
- (id)deviceStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (unsigned long long)identifierHash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 deviceStatus:(id)arg2 locationsDuringSession:(id)arg3 unlockLocation:(id)arg4 lockLocation:(id)arg5 mostRecentLocation:(id)arg6 startingLocation:(id)arg7 offWristLocation:(id)arg8 parkedCarLocation:(id)arg9 destinationMapItem:(id)arg10;
- (id)locationsDuringSession;
- (id)lockLocation;
- (void)logCacheForSessionID:(id)arg1 role:(id)arg2 deviceType:(id)arg3 transaction:(id)arg4 hashString:(id)arg5;
- (id)mostRecentLocation;
- (id)offWristLocation;
- (id)outputToDictionary;
- (id)parkedCarLocation;
- (void)setDestinationMapItem:(id)arg1;
- (void)setDeviceStatus:(id)arg1;
- (void)setLocationsDuringSession:(id)arg1;
- (void)setLockLocation:(id)arg1;
- (void)setMostRecentLocation:(id)arg1;
- (void)setOffWristLocation:(id)arg1;
- (void)setParkedCarLocation:(id)arg1;
- (void)setStartingLocation:(id)arg1;
- (void)setUnlockLocation:(id)arg1;
- (void)shiftLocation:(id)arg1 queue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)shiftLocationsOnQueue:(id)arg1 handler:(id /* block */)arg2;
- (bool)shiftRequiredForLocation:(id)arg1;
- (id)startingLocation;
- (id)unlockLocation;

@end


@interface CHSMutableRemoteDevice : CHSRemoteDevice

@property (nonatomic) long long currentSupportedVersion;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic) bool isPossibleSource;
@property (nonatomic, copy) NSDate *lastConnectionDate;
@property (nonatomic) long long minSupportedVersion;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long pairingState;
@property (nonatomic, copy) NSUUID *relationshipID;

- (void)setCurrentSupportedVersion:(long long)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setIsPossibleSource:(bool)arg1;
- (void)setLastConnectionDate:(id)arg1;
- (void)setMinSupportedVersion:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPairingState:(long long)arg1;
- (void)setRelationshipID:(id)arg1;

@end

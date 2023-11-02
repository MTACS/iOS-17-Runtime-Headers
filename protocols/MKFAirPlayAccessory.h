
@protocol MKFAirPlayAccessory <MKFMediaAccessory, MKFAirPlayAccessoryPublicExtensions>

@required

- (void)addPairedUsersObject:(id <MKFUser>)arg1;
- (MKFAirPlayAccessoryDatabaseID *)databaseID;
- (NSDate *)lastPairingAuditTime;
- (NSNumber *)minimumUserPriviledge;
- (NSNumber *)needsPairingAudit;
- (NSArray *)pairedUsers;
- (HMFPairingIdentity *)pairingIdentity;
- (NSSet *)pairingsToRemove;
- (NSString *)password;
- (void)removePairedUsersObject:(id <MKFUser>)arg1;
- (void)setLastPairingAuditTime:(NSDate *)arg1;
- (void)setMinimumUserPriviledge:(NSNumber *)arg1;
- (void)setNeedsPairingAudit:(NSNumber *)arg1;
- (void)setPairingIdentity:(HMFPairingIdentity *)arg1;
- (void)setPairingsToRemove:(NSSet *)arg1;
- (void)setPassword:(NSString *)arg1;

@end

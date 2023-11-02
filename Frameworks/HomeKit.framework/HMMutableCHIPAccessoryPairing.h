
@interface HMMutableCHIPAccessoryPairing : HMCHIPAccessoryPairing

@property (copy) HMCHIPHome *home;
@property (copy) NSUUID *systemCommissionerPairingUUID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

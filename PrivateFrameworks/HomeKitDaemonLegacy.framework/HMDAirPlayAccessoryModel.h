
@interface HMDAirPlayAccessoryModel : HMDMediaAccessoryModel

@property (nonatomic, retain) NSNumber *minimumUserPriviledge;
@property (nonatomic, retain) HMFPairingIdentity *pairingIdentity;
@property (nonatomic, retain) NSString *password;

+ (id)properties;

@end


@interface DRSDampeningConfigurationMO : NSManagedObject

@property (nonatomic) double acceptanceRate;
@property (nonatomic) long long countCap;
@property (nonatomic, retain) DRSTeamDampeningConfigurationMO *defaultTeamConfiguration;
@property (nonatomic) double hysteresis;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) DRSDampeningManagerMO *parentDampeningManagerResource;
@property (nonatomic, retain) DRSDampeningManagerMO *parentDampeningManagerSignature;
@property (nonatomic, retain) DRSTeamDampeningConfigurationMO *parentTeamConfiguration;

+ (id)fetchRequest;

@end

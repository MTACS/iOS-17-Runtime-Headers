
@interface DRSTeamDampeningConfigurationMO : NSManagedObject

@property (nonatomic, retain) NSSet *categoryConfigurations;
@property (nonatomic, retain) DRSDampeningConfigurationMO *defaultConfiguration;
@property (nonatomic, retain) DRSDampeningManagerMO *parentDampeningManager;
@property (nonatomic, copy) NSString *teamID;

+ (id)fetchRequest;

@end

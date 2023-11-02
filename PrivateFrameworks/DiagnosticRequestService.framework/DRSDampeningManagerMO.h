
@interface DRSDampeningManagerMO : NSManagedObject

@property (nonatomic, retain) DRSDampeningConfigurationMO *defaultSignatureConfiguration;
@property (nonatomic, retain) DRSDampeningEnforcementSettingsMO *enforcementSettings;
@property (nonatomic, retain) NSSet *resourceConfigurations;
@property (nonatomic, retain) NSSet *teamConfigurations;
@property (nonatomic) long long totalCap;

+ (id)fetchRequest;

@end

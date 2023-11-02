
@interface SBSAbstractApplicationService : SBSAbstractFacilityService

@property (nonatomic, readonly) SBSApplicationClient *client;

+ (Class)serviceFacilityClientClass;

- (id)client;

@end

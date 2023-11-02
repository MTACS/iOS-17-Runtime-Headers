
@protocol TRAArbiterStagesRolesProvider <NSObject>

@required

- (NSSet *)ambientPresentationStageRoles;
- (NSSet *)orientationStageRoles;
- (NSSet *)userInterfaceStyleStageRoles;
- (NSSet *)zOrderStageRoles;

@end

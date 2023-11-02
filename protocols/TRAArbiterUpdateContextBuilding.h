
@protocol TRAArbiterUpdateContextBuilding <NSObject>

@required

- (bool)forceOrientationResolution;
- (TRASettingsActuationContext *)orientationActuationContext;
- (NSString *)reason;
- (NSArray *)requestingParticipantsUniqueIdentifiers;
- (void)setForceOrientationResolution:(bool)arg1;
- (void)setOrientationActuationContext:(TRASettingsActuationContext *)arg1;
- (void)setReason:(NSString *)arg1;
- (void)setRequestingParticipantsUniqueIdentifiers:(NSArray *)arg1;
- (void)setUserInterfaceStyleActuationContext:(TRASettingsActuationContext *)arg1;
- (TRASettingsActuationContext *)userInterfaceStyleActuationContext;

@end


@interface SBThermalDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool wasConnectedToWiFiWhenBrickedForThermalConditions;

- (void)_bindAndRegisterDefaults;

@end

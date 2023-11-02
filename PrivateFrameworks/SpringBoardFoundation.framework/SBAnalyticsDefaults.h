
@interface SBAnalyticsDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, copy) NSDictionary *engagementPlistRepresentation;

- (void)_bindAndRegisterDefaults;

@end


@interface SBRecentDisplayItemsDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, retain) NSArray *commandTabPlistRepresentation;
@property (nonatomic, retain) NSArray *dockRecentsPlistRepresentation;

- (void)_bindAndRegisterDefaults;

@end
